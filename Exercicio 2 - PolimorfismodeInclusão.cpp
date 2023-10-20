#include <iostream>

using namespace std;

class Desenhavel {
public:
    virtual void desenhar() const = 0;
};

class Circulo : public Desenhavel {
public:
    void desenhar() const override {
        cout << "Desenhar um círculo" << endl;
    }
};

class Retangulo : public Desenhavel {
public:
    void desenhar() const override {
        cout << "Desenhar um retângulo" << endl;
    }
};

class Triangulo : public Desenhavel {
public:
    void desenhar() const override {
        cout << "Desenhar um triângulo" << endl;
    }
};

int main() {
    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    Desenhavel* objetos[] = {&circulo, &retangulo, &triangulo};

    for (Desenhavel* objeto : objetos) {
        objeto->desenhar();
    }

    return 0;
}
