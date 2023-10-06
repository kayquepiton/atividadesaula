#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Aluno {
private:
    string nome;
    string email;
    double nota1, nota2;

public:
    // Construtor padrão
    Aluno() : nome(""), email(""), nota1(0), nota2(0) {}

    // Construtor parametrizado
    Aluno(string nome, string email, double n1, double n2) 
        : nome(nome), email(email), nota1(n1), nota2(n2) {}

    // Métodos para recuperar valores dos atributos (getters)
    string getNome() const { return nome; }
    string getEmail() const { return email; }
    double getNota1() const { return nota1; }
    double getNota2() const { return nota2; }

    // Métodos para definir valores dos atributos (setters)
    void setNome(const string &n) { nome = n; }
    void setEmail(const string &e) { email = e; }
    void setNota1(double n) { nota1 = n; }
    void setNota2(double n) { nota2 = n; }
};

class BancoDeDados {
private:
    vector<Aluno> alunos;

    // Método privado para encontrar um aluno pelo e-mail
    int findAlunoByEmail(const string &email) {
        for (int i = 0; i < alunos.size(); i++) {
            if (alunos[i].getEmail() == email) {
                return i;
            }
        }
        return -1;
    }

public:
    // Adiciona um novo aluno ao banco de dados
    void inserirAluno(const Aluno &a) {
        alunos.push_back(a);
    }

    // Altera os dados de um aluno pelo e-mail
    bool alterarAluno(const string &email, const Aluno &novoAluno) {
        int idx = findAlunoByEmail(email);
        if (idx != -1) {
            alunos[idx] = novoAluno;
            return true;
        }
        return false;
    }

    // Exclui um aluno do banco de dados pelo e-mail
    bool excluirAluno(const string &email) {
        int idx = findAlunoByEmail(email);
        if (idx != -1) {
            alunos.erase(alunos.begin() + idx);
            return true;
        }
        return false;
    }

    // Salva os dados dos alunos em um arquivo
    void salvar(const string &filename) {
        ofstream out(filename);
        for (const Aluno &a : alunos) {
            out << a.getNome() << ", ";
            out << a.getEmail() << ", ";
            out << a.getNota1() << ", ";
            out << a.getNota2() << "\n";
        }
        out.close();
    }

    // Carrega os dados dos alunos de um arquivo
    void carregar(const string &filename) {
        ifstream in(filename);
        string nome, email;
        double n1, n2;

        alunos.clear();

        while (getline(in, nome)) {
            getline(in, email);
            in >> n1;
            in.ignore();
            in >> n2;
            in.ignore();

            alunos.push_back(Aluno(nome, email, n1, n2));
        }
        in.close();
    }
};

int main() {
    BancoDeDados bd;
    int escolha;

    // Loop do menu principal
    do {
        cout << "\nMenu:\n";
        cout << "1. Inserir aluno\n";
        cout << "2. Alterar aluno\n";
        cout << "3. Excluir aluno\n";
        cout << "4. Salvar alunos em arquivo\n";
        cout << "5. Carregar alunos de arquivo\n";
        cout << "6. Sair\n";
        cout << "Escolha: ";
        cin >> escolha;
        cin.ignore();

        string nome, email;
        double nota1, nota2;

        // Processa a escolha do usuário
        switch (escolha) {
            case 1: // Inserir aluno
                // ... (código omitido para brevidade)
                break;
            case 2: // Alterar aluno
                // ... (código omitido para brevidade)
                break;
            case 3: // Excluir aluno
                // ... (código omitido para brevidade)
                break;
            case 4: // Salvar alunos
                // ... (código omitido para brevidade)
                break;
            case 5: // Carregar alunos
                // ... (código omitido para brevidade)
                break;
            case 6: // Sair
                cout << "Saindo...\n";
                break;
            default:
                cout << "Escolha inválida.\n";
        }
    } while (escolha != 6);

    return 0;
}
