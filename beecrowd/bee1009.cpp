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

/*
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string nome;
    double sal, vendas, total;
    cin >> nome;
    cin >> sal >> vendas;
    
    total = sal + (vendas*0.15);
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    
    return 0;
}
*/