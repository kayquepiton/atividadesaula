#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    int anoPublicacao;
    string genero;
    string editora;

public:

    // Construtor padrão
    Livro() {}

    // Construtor personalizado
    Livro(const std::string& t, const std::string& a, int ano, const std::string& g, const std::string& e)
        : titulo(t), autor(a), anoPublicacao(ano), genero(g), editora(e) {}

    // Métodos de acesso (getters)
    string getTitulo() const {
        return titulo;
    }

    string getAutor() const {
        return autor;
    }

    int getAnoPublicacao() const {
        return anoPublicacao;
    }

    string getGenero() const {
        return genero;
    }

    string getEditora() const {
        return editora;
    }

    // Métodos de modificação (setters)
    void setTitulo(const string& t) {
        titulo = t;
    }

    void setAutor(const string& a) {
        autor = a;
    }

    void setAnoPublicacao(int ano) {
        anoPublicacao = ano;
    }

    void setGenero(const string& g) {
        genero = g;
    }

    void setEditora(const string& e) {
        editora = e;
    }
};

class Celular {
private:
    string marca;
    string modelo;
    string sistema_operacional;
    string tamanho_tela;
    string armazenamento;
    string bateria;
    string processador;

public:
    // Construtor padrão
    Celular() {}

    // Construtor personalizado
    Celular(string _marca, string _modelo, string _sistema_operacional,
            string _tamanho_tela, string _armazenamento, string _bateria,
            string _processador)
        : marca(_marca), modelo(_modelo), sistema_operacional(_sistema_operacional),
          tamanho_tela(_tamanho_tela), armazenamento(_armazenamento), bateria(_bateria),
          processador(_processador) {}

    // Métodos de acesso (getters)
    string getMarca() const {
        return marca;
    }

    string getModelo() const {
        return modelo;
    }

    string getSistemaOperacional() const {
        return sistema_operacional;
    }

    string getTamanhoTela() const {
        return tamanho_tela;
    }

    string getArmazenamento() const {
        return armazenamento;
    }

    string getBateria() const {
        return bateria;
    }

    string getProcessador() const {
        return processador;
    }

    // Métodos de modificação (setters)
    void setMarca(string _marca) {
        marca = _marca;
    }

    void setModelo(string _modelo) {
        modelo = _modelo;
    }

    void setSistemaOperacional(string _sistema_operacional) {
        sistema_operacional = _sistema_operacional;
    }

    void setTamanhoTela(string _tamanho_tela) {
        tamanho_tela = _tamanho_tela;
    }

    void setArmazenamento(string _armazenamento) {
        armazenamento = _armazenamento;
    }

    void setBateria(string _bateria) {
        bateria = _bateria;
    }

    void setProcessador(string _processador) {
        processador = _processador;
    }
};

class Mamifero {
private:
    string nome_cientifico;
    string habitat;
    string dieta;
    string tipo_locomocao;

public:
    // Construtor padrão
    Mamifero() {}

    // Construtor personalizado
    Mamifero(string _nome_cientifico, string _habitat, string _dieta, string _tipo_locomocao)
        : nome_cientifico(_nome_cientifico), habitat(_habitat), dieta(_dieta), tipo_locomocao(_tipo_locomocao) {}

    // Métodos de acesso (getters)
    string getNomeCientifico() const {
        return nome_cientifico;
    }

    string getHabitat() const {
        return habitat;
    }

    string getDieta() const {
        return dieta;
    }

    string getTipoLocomocao() const {
        return tipo_locomocao;
    }

    // Métodos de modificação (setters)
    void setNomeCientifico(string _nome_cientifico) {
        nome_cientifico = _nome_cientifico;
    }

    void setHabitat(string _habitat) {
        habitat = _habitat;
    }

    void setDieta(string _dieta) {
        dieta = _dieta;
    }

    void setTipoLocomocao(string _tipo_locomocao) {
        tipo_locomocao = _tipo_locomocao;
    }
};

class Ave {
private:
    string nome_cientifico;
    string habitat;
    string dieta;
    string tipo_locomocao;

public:
    // Construtor padrão
    Ave() {}

    // Construtor personalizado
    Ave(string _nome_cientifico, string _habitat, string _dieta, string _tipo_locomocao)
        : nome_cientifico(_nome_cientifico), habitat(_habitat), dieta(_dieta), tipo_locomocao(_tipo_locomocao) {}

    // Métodos de acesso (getters)
    string getNomeCientifico() const {
        return nome_cientifico;
    }

    string getHabitat() const {
        return habitat;
    }

    string getDieta() const {
        return dieta;
    }

    string getTipoLocomocao() const {
        return tipo_locomocao;
    }

    // Métodos de modificação (setters)
    void setNomeCientifico(string _nome_cientifico) {
        nome_cientifico = _nome_cientifico;
    }

    void setHabitat(string _habitat) {
        habitat = _habitat;
    }

    void setDieta(string _dieta) {
        dieta = _dieta;
    }

    void setTipoLocomocao(string _tipo_locomocao) {
        tipo_locomocao = _tipo_locomocao;
    }
};

class Flor {
private:
    string nome_cientifico;
    string familia;
    string cor;
    string estrutura;

public:
    // Construtor padrão
    Flor() {}

    // Construtor personalizado
    Flor(string _nome_cientifico, string _familia, string _cor, string _estrutura)
        : nome_cientifico(_nome_cientifico), familia(_familia), cor(_cor), estrutura(_estrutura) {}

    // Métodos de acesso (getters)
    string getnome_cientifico() const {
        return nome_cientifico;
    }

    string getFamilia() const {
        return familia;
    }

    string getCor() const {
        return cor;
    }

    string getEstrutura() const {
        return estrutura;
    }

    // Métodos de modificação (setters)
    void setnome_cientifico(string _nome_cientifico) {
        nome_cientifico = _nome_cientifico;
    }

    void setFamilia(string _familia) {
        familia = _familia;
    }

    void setCor(string _cor) {
        cor = _cor;
    }

    void setEstrutura(string _estrutura) {
        estrutura = _estrutura;
    }
};

int main() {
    // Criando um objeto da classe Livro
    Livro meuLivro;
    meuLivro.setTitulo("O Senhor dos Anéis");
    meuLivro.setAutor("J.R.R. Tolkien");
    meuLivro.setAnoPublicacao(1954);
    meuLivro.setGenero("Fantasia");
    meuLivro.setEditora("Editora Martins");

    // Criando um objeto da classe Celular
    Celular meuCelular;
    meuCelular.setMarca("Samsung");
    meuCelular.setModelo("Galaxy S21");
    meuCelular.setSistemaOperacional("Android");
    meuCelular.setTamanhoTela("6.2 polegadas");
    meuCelular.setArmazenamento("128 GB");
    meuCelular.setBateria("4000 mAh");
    meuCelular.setProcessador("Snapdragon 888");

    // Criando um objeto da classe Mamífero
    Mamifero meuMamifero;
    meuMamifero.setNomeCientifico("Panthera leo");
    meuMamifero.setHabitat("Savanas");
    meuMamifero.setDieta("Carnívoro");
    meuMamifero.setTipoLocomocao("Quadrúpede");

    // Criando um objeto da classe Ave
    Ave minhaAve;
    minhaAve.setNomeCientifico("Ara ararauna");
    minhaAve.setHabitat("Florestas tropicais");
    minhaAve.setDieta("Frutas e sementes");
    minhaAve.setTipoLocomocao("Voo");

    // Criando um objeto da classe Flor
    Flor minhaFlor;
    minhaFlor.setnome_cientifico("Rosa");
    minhaFlor.setFamilia("Rosaceae");
    minhaFlor.setCor("Vermelha");
    minhaFlor.setEstrutura("Pétalas e espinhos");

    // Imprimindo informações sobre os objetos
    cout << "Informações sobre o Livro:" << endl;
    cout << "Título: " << meuLivro.getTitulo() << endl;
    cout << "Autor: " << meuLivro.getAutor() << endl;
    cout << "Ano de Publicação: " << meuLivro.getAnoPublicacao() << endl;
    cout << "Gênero: " << meuLivro.getGenero() << endl;
    cout << "Editora: " << meuLivro.getEditora() << endl;

    cout << "\nInformações sobre o Celular:" << endl;
    cout << "Marca: " << meuCelular.getMarca() << endl;
    cout << "Modelo: " << meuCelular.getModelo() << endl;
    cout << "Sistema Operacional: " << meuCelular.getSistemaOperacional() << endl;
    cout << "Tamanho da Tela: " << meuCelular.getTamanhoTela() << endl;
    cout << "Armazenamento: " << meuCelular.getArmazenamento() << endl;
    cout << "Bateria: " << meuCelular.getBateria() << endl;
    cout << "Processador: " << meuCelular.getProcessador() << endl;

    cout << "\nInformações sobre o Mamífero:" << endl;
    cout << "Nome Científico: " << meuMamifero.getNomeCientifico() << endl;
    cout << "Habitat: " << meuMamifero.getHabitat() << endl;
    cout << "Dieta: " << meuMamifero.getDieta() << endl;
    cout << "Tipo de Locomoção: " << meuMamifero.getTipoLocomocao() << endl;

    cout << "\nInformações sobre a Ave:" << endl;
    cout << "Nome Científico: " << minhaAve.getNomeCientifico() << endl;
    cout << "Habitat: " << minhaAve.getHabitat() << endl;
    cout << "Dieta: " << minhaAve.getDieta() << endl;
    cout << "Tipo de Locomoção: " << minhaAve.getTipoLocomocao() << endl;

    cout << "\nInformações sobre a Flor:" << endl;
    cout << "Nome Científico: " << minhaFlor.getnome_cientifico() << endl;
    cout << "Família: " << minhaFlor.getFamilia() << endl;
    cout << "Cor: " << minhaFlor.getCor() << endl;
    cout << "Estrutura: " << minhaFlor.getEstrutura() << endl;

    return 0;
}

