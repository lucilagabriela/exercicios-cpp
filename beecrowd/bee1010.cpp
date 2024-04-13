# include <iostream>
using namespace std;

int main() {
    int p1, n1, p2, n2;
    float preco1, preco2, totPagar;
    cin >> p1;
    cin >> n1;
    cin >> preco1;
    cin >> p2;
    cin >> n2;
    cin >> preco2;
    totPagar = (n1*preco1)+(n2*preco2);
    printf("VALOR A PAGAR: R$ %.2f\n", totPagar);

    return 0;
}

/*
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int c1, p1, c2, p2;
    double valor1, valor2, total;
    cin >> c1 >> p1 >> valor1;
    cin >> c2 >> p2 >> valor2;
    total = (p1*valor1)+(p2*valor2);
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
 
    return 0;
}
*/