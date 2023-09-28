#include <iostream>
#include <vector>

using namespace std;

class Ponto {
private:
    float x, y;

public:

    // Construtor padrão
    Ponto() {}

    // Construtor personalizado
    Ponto(const float& a, const float& b)
        : x(a), y(b){}

    // Métodos de acesso (getters)
    float getX() const {
        return x;
    }

    // Métodos de acesso (getters)
    float getY() const {
        return y;
    }

    // Métodos de modificação (setters)
    void setX(const float& a) {
        x = a;
    }

    // Métodos de modificação (setters)
    void setY(const float& b) {
        y = b;
    }

};

class Poligono {
private:
    vector<Ponto> pontos;

public:

    // Construtor padrão
    Poligono() {}

    // Construtor personalizado
    Poligono(const vector<Ponto>& p)
        : pontos(p) {}

    // Métodos de acesso (getters)
    vector<Ponto> getPontos() const {
        return pontos;
    }

    // Métodos de modificação (setters)
    void setPontos(Ponto p) {
        pontos.push_back(p);
    }
};

int main(){

    // Criando um objeto da classe Ponto
    Ponto meuPonto;
    meuPonto.setX(0.1);
    meuPonto.setY(0.1);

    // Imprimindo informações sobre os objetos
    cout << "Ponto X: " << meuPonto.getX() << endl;
    cout << "Ponto Y: " << meuPonto.getY() << endl;

    // Criando um objeto da classe Poligono
    Poligono pontosDoPoligono;
    pontosDoPoligono.setPontos(meuPonto); // Adicionando um ponto ao polígono

    // Imprimindo informações sobre os objetos
    cout << "Pontos do Poligono: " << pontosDoPoligono.getPontos().size() << " ponto(s)" << endl;

    for(Ponto p:pontosDoPoligono.getPontos())
        cout << "(" << p.getX() << ", "<< p.getY() << ")" << endl;

    return 0;
}