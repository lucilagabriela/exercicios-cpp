#include <iostream>
using namespace std;

int main() {
    int numero, horas;
    float valor, salario;
    cin >> numero >> horas >> valor;
    salario = horas*valor;
    cout << "NUMBER = " << numero << endl;
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}