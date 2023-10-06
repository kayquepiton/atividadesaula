#include <iostream>
#include <string>

using namespace std;

// Superclasse Animal
class Animal {
protected:
    string nome;
    int idade;

public:
    // Construtor
    Animal(string n, int i) : nome(n), idade(i) {}

    // Método virtual para fazer som
    virtual void fazerSom() const {
        cout << "Animal faz algum som." << endl;
    }

    // Getter para nome
    string getNome() const { return nome; }

    // Getter para idade
    int getIdade() const { return idade; }
};

// Subclasse Cachorro que herda de Animal
class Cachorro : public Animal {
public:
    // Construtor
    Cachorro(string n, int i) : Animal(n, i) {}

    // Método substituído para fazer som
    void fazerSom() const override {
        cout << "Au Au!" << endl;
    }
};

int main() {
    // Criando um objeto da superclasse Animal
    Animal animalGenerico("Animal genérico", 5);
    cout << animalGenerico.getNome() << " de " << animalGenerico.getIdade() << " anos faz o som: ";
    animalGenerico.fazerSom();

    // Criando um objeto da subclasse Cachorro
    Cachorro dog("Rex", 3);
    cout << dog.getNome() << " de " << dog.getIdade() << " anos faz o som: ";
    dog.fazerSom();

    return 0;
}
