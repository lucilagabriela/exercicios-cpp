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

/*
#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A, B, C, pi = 3.14159, areaT, areaC, areaTrap, areaQ, areaR;
    cin >> A >> B >> C;
    
    areaT = (A*C)/2;
    areaC = pi*pow(C, 2);
    areaTrap = ((A+B)*C)/2;
    areaQ = pow(B, 2);
    areaR = A*B;
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << areaT << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaC << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrap << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaQ << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaR << endl;

    return 0;
}
*/