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