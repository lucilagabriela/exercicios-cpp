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

/*
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int func, horas;
    double valor, sal;
    
    cin >> func >> horas >> valor;
    
    cout << "NUMBER = " << func << endl;
    sal = horas * valor;
    
    cout << "SALARY = U$ " << fixed << setprecision(2) << sal << endl;
 
    return 0;
}
*/