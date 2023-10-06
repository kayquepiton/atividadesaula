#include <iostream>
#include <cmath>

using namespace std;

// Superclasse Forma
class Forma {
public:
    // Método virtual para calcular área
    virtual double calcularArea() const = 0;
};

// Subclasse Retangulo que herda de Forma
class Retangulo : public Forma {
private:
    double largura, altura;

public:
    // Construtor
    Retangulo(double w, double h) : largura(w), altura(h) {}

    // Implementação do método calcularArea
    double calcularArea() const override {
        return largura * altura;
    }
};

// Subclasse Circulo que herda de Forma
class Circulo : public Forma {
private:
    double raio;

public:
    // Construtor
    Circulo(double r) : raio(r) {}

    // Implementação do método calcularArea
    double calcularArea() const override {
        return M_PI * raio * raio;
    }
};

int main() {
    int escolha;
    double largura, altura, raio;

    do {
        cout << "\nEscolha a forma desejada:\n";
        cout << "1. Retângulo\n";
        cout << "2. Círculo\n";
        cout << "3. Sair\n";
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 1: // Retângulo
                cout << "Digite a largura: ";
                cin >> largura;
                cout << "Digite a altura: ";
                cin >> altura;
                Retangulo ret(largura, altura);
                cout << "Área do retângulo: " << ret.calcularArea() << endl;
                break;

            case 2: // Círculo
                cout << "Digite o raio: ";
                cin >> raio;
                Circulo cir(raio);
                cout << "Área do círculo: " << cir.calcularArea() << endl;
                break;

            case 3: // Sair
                cout << "Saindo...\n";
                break;

            default:
                cout << "Escolha inválida.\n";
        }
    } while (escolha != 3);

    return 0;
}
