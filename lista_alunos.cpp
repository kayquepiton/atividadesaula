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
    Aluno() : nome(""), email(""), nota1(0), nota2(0) {}

    Aluno(string nome, string email, double n1, double n2) 
        : nome(nome), email(email), nota1(n1), nota2(n2) {}

    // Getters
    string getNome() const { return nome; }
    string getEmail() const { return email; }
    double getNota1() const { return nota1; }
    double getNota2() const { return nota2; }

    // Setters
    void setNome(const string &n) { nome = n; }
    void setEmail(const string &e) { email = e; }
    void setNota1(double n) { nota1 = n; }
    void setNota2(double n) { nota2 = n; }
};

class BancoDeDados {
private:
    vector<Aluno> alunos;

    int findAlunoByEmail(const string &email) {
        for (int i = 0; i < alunos.size(); i++) {
            if (alunos[i].getEmail() == email) {
                return i;
            }
        }
        return -1;
    }

public:
    void inserirAluno(const Aluno &a) {
        alunos.push_back(a);
    }

    bool alterarAluno(const string &email, const Aluno &novoAluno) {
        int idx = findAlunoByEmail(email);
        if (idx != -1) {
            alunos[idx] = novoAluno;
            return true;
        }
        return false;
    }

    bool excluirAluno(const string &email) {
        int idx = findAlunoByEmail(email);
        if (idx != -1) {
            alunos.erase(alunos.begin() + idx);
            return true;
        }
        return false;
    }

    void salvar(const string &filename) {
        ofstream out(filename);
        for (const Aluno &a : alunos) {
            out << a.getNome() << "\n";
            out << a.getEmail() << "\n";
            out << a.getNota1() << "\n";
            out << a.getNota2() << "\n";
        }
        out.close();
    }

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

    do {
        cout << "Menu:\n";
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
        switch (escolha) {
            case 1:
                cout << "Nome: ";
                getline(cin, nome);
                cout << "Email: ";
                getline(cin, email);
                cout << "Nota 1: ";
                cin >> nota1;
                cout << "Nota 2: ";
                cin >> nota2;
                bd.inserirAluno(Aluno(nome, email, nota1, nota2));
                break;
            case 2:
                cout << "Email do aluno a ser alterado: ";
                getline(cin, email);
                cout << "Novo nome: ";
                getline(cin, nome);
                cout << "Novo Email: ";
                getline(cin, email);
                cout << "Nova Nota 1: ";
                cin >> nota1;
                cout << "Nova Nota 2: ";
                cin >> nota2;
                bd.alterarAluno(email, Aluno(nome, email, nota1, nota2));
                break;
            case 3:
                cout << "Email do aluno a ser excluido: ";
                getline(cin, email);
                bd.excluirAluno(email);
                break;
            case 4:
                bd.salvar("alunos.txt");
                cout << "Dados salvos.\n";
                break;
            case 5:
                bd.carregar("alunos.txt");
                cout << "Dados carregados.\n";
                break;
            case 6:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Escolha inválida.\n";
        }
    } while (escolha != 6);

    return 0;
}