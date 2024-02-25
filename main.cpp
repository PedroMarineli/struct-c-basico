/*Crie uma struct chamada Cliente que armazena informações sobre um cliente, como nome, numero da conta, idade, data de validade do cartão e saldo bancário. A tarefa será implementar um programa que verifica se o saldo bancário do cliente é positivo, negativo ou zero, e exibe uma mensagem correspondente.*/
#include <iostream>
#include <string>

typedef struct {
    std::string nome;
    int numConta;
    int idade;
    int dataCartao;
    float saldo;
} cadCliente;

int main() {
    cadCliente cliente;

    std::cout << "Digite o nome do cliente: ";
    std::cin >> cliente.nome;

    std::cout << "Digite o saldo do cliente: ";
    std::cin >> cliente.saldo;

    std::cout << "Digite a idade do cliente: ";
    std::cin >> cliente.idade;

    std::cout << "Digite data de validadedo cartão do cliente: ";
    std::cin >> cliente.dataCartao;

    std::cout << "Digite o número da conta do cliente: ";
    std::cin >> cliente.numConta;

    if (cliente.saldo > 0) {
        std::cout << "O saldo do cliente é positivo.\n";
    } else if (cliente.saldo == 0) {
        std::cout << "O saldo do cliente é zero.\n";
    } else {
        std::cout << "O saldo do cliente é negativo.\n";
    }
}