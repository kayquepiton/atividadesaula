#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

class Transacao {
private:
    string data;
    float valor;
    string descricao;

public:
    Transacao(float v, string desc) : valor(v), descricao(desc) {
        time_t t = time(0);
        tm* now = localtime(&t);
        data = to_string(now->tm_year + 1900) + '-' + to_string(now->tm_mon + 1) + '-' + to_string(now->tm_mday);
    }

    string toString() const {
        return data + " - " + descricao + ": " + to_string(valor);
    }
};

class Conta {
protected:
    int numero;
    string nome_correntista;
    float saldo;
    vector<Transacao> transacoes;

public:
    Conta(int num, string nome, float saldoInicial) : numero(num), nome_correntista(nome), saldo(saldoInicial) {}

    void depositar(float valor, string descricao = "Deposito") {
        saldo += valor;
        transacoes.push_back(Transacao(valor, descricao));
    }

    virtual bool sacar(float valor, string descricao = "Saque") {
        if (valor > saldo) {
            return false;
        }
        saldo -= valor;
        transacoes.push_back(Transacao(-valor, descricao));
        return true;
    }

    virtual void imprimir_extrato() {
        cout << "Numero da Conta: " << numero << endl;
        cout << "Nome do Correntista: " << nome_correntista << endl;
        for (const auto &t : transacoes) {
            cout << t.toString() << endl;
        }
        cout << "Saldo: " << setprecision(2) << fixed << saldo << endl;
    }

    int getNumero() const { return numero; }
    void setNumero(int num) { numero = num; }

    string getNomeCorrentista() const { return nome_correntista; }
    void setNomeCorrentista(string nome) { nome_correntista = nome; }

    float getSaldo() const { return saldo; }
};

class ContaComum : public Conta {
public:
    ContaComum(int num, string nome, float saldoInicial) : Conta(num, nome, saldoInicial) {}
};

class ContaPoupanca : public Conta {
private:
    int dia_aniversario;

public:
    ContaPoupanca(int num, string nome, int dia, float saldoInicial) : Conta(num, nome, saldoInicial), dia_aniversario(dia) {}

    void imprimir_extrato() override {
        Conta::imprimir_extrato();
        cout << "Dia do Aniversario: " << dia_aniversario << endl;
    }

    int getDiaAniversario() const { return dia_aniversario; }
    void setDiaAniversario(int dia) { dia_aniversario = dia; }
};

class ContaComLimite : public Conta {
private:
    float limite;

public:
    ContaComLimite(int num, string nome, float lim, float saldoInicial) : Conta(num, nome, saldoInicial), limite(lim) {}

    bool sacar(float valor, string descricao = "Saque") override {
        if (valor > (saldo + limite)) {
            return false;
        }
        saldo -= valor;
        transacoes.push_back(Transacao(-valor, descricao));
        return true;
    }

    void imprimir_extrato() override {
        Conta::imprimir_extrato();
        cout << "Limite: " << setprecision(2) << fixed << limite << endl;
        cout << "Disponível (incluindo limite): " << setprecision(2) << fixed << saldo + limite << endl;
    }

    float getLimite() const { return limite; }
    void setLimite(float lim) { limite = lim; }
};

int main() {
    ContaComum cc(12345, "Joao", 1000);
    cc.depositar(500);
    cc.sacar(200);
    cc.imprimir_extrato();

    cout << "-------------------------------" << endl;

    ContaPoupanca cp(67890, "Maria", 15, 2000);
    cp.depositar(300);
    cp.sacar(100);
    cp.imprimir_extrato();

    cout << "-------------------------------" << endl;

    ContaComLimite cl(11122, "Jose", 500, 500);
    cl.depositar(200);
    cl.sacar(600);
    cl.imprimir_extrato();

    return 0;
}
