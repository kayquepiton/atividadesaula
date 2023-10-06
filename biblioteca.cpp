#include <iostream>
#include <string>

using namespace std;

// Superclasse itemBiblioteca 
class itemBiblioteca  {
protected:
    string titulo;
    string autor;
    string numero_copias;

public:
    // Construtor
    itemBiblioteca (string t, string a, string n) : titulo(t), autor(t), numero_copias(n) {}

    // Getter para titulo
    string geTitulo() const { return titulo; }

    // Getter para autor
    string getAutor() const { return autor; }

    // Getter para numero de copias
    string getNumeroCopias() const { return numero_copias; }
};

// Subclasse Livro que herda de itemBiblioteca
class Livro : public itemBiblioteca {
private:
    int numero_paginas;

public:
    // Construtor
    Livro(string t, string a, string n) : itemBiblioteca(t, a, n) {}

};

// Subclasse Livro que herda de itemBiblioteca
class DVD : public itemBiblioteca {
private:
    string duracao;

public:
    // Construtor
    DVD(string t, string a, string n) : itemBiblioteca(t, a, n)  {}

};


int main() {


    return 0;
}
