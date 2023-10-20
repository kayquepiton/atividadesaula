#include <iostream>

using namespace std;

class Forma {
public:
    virtual double area() const {
        return 0.0;
    }
};

class Circulo : public Forma {
private:
    double raio;
public:
    Circulo(double r) : raio(r) {}
    double area() const override {
        return 3.14159265359 * raio * raio;
    }
};

class Retangulo : public Forma {
private:
    double largura;
    double altura;
public:
    Retangulo(double l, double a) : largura(l), altura(a) {}
    double area() const override {
        return largura * altura;
    }
};

int main() {
    Circulo circulo(5.0);
    Retangulo retangulo(4.0, 6.0);

    Forma* formas[] = {&circulo, &retangulo};

    for (Forma* forma : formas) {
        cout << "Área da forma: " << forma->area() << endl;
    }

    return 0;
}
