#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Lista {
private:
    vector<T> elementos;
public:
    void adicionar(const T& elemento) {
        elementos.push_back(elemento);
    }

    void remover(const T& elemento) {
        for (auto it = elementos.begin(); it != elementos.end(); ++it) {
            if (*it == elemento) {
                elementos.erase(it);
                break;
            }
        }
    }

    void listar() const {
        for (const T& elemento : elementos) {
            cout << elemento << " ";
        }
        cout << endl;
    }
};

int main() {
    Lista<int> listaInt;
    listaInt.adicionar(1);
    listaInt.adicionar(2);
    listaInt.adicionar(3);
    listaInt.listar();
    listaInt.remover(2);
    listaInt.listar();

    Lista<string> listaString;
    listaString.adicionar("Hello");
    listaString.adicionar("World");
    listaString.listar();

    Lista<double> listaDouble;
    listaDouble.adicionar(3.14);
    listaDouble.adicionar(2.71);
    listaDouble.listar();

    return 0;
}
