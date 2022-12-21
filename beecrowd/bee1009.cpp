#include <iostream>
using namespace std;

int main() {
    string nome;
    double salario, vendas, total;
    cin >> nome;
    cin >> salario;
    cin >> vendas;
    total = salario+(0.15*vendas);
    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}