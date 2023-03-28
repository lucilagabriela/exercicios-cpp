#include <iostream>
using namespace std;
#include <math.h>

int main() {
    double A, B, C, areaTri, areaCir, areaTra, areaQua, areaRet;
    cin >> A >> B >> C;
    areaTri = (A*C)/2;
    areaCir = 3.14159*pow(C, 2);
    areaTra = ((A+B)*C)/2;
    areaQua = pow(B, 2);
    areaRet = A*B;
    printf("TRIANGULO: %.3f\n", areaTri);
    printf("CIRCULO: %.3f\n", areaCir);
    printf("TRAPEZIO: %.3f\n", areaTra);
    printf("QUADRADO: %.3f\n", areaQua);
    printf("RETANGULO: %.3f\n", areaRet);

    return 0;
}