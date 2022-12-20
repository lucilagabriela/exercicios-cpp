#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double raio, area;
    cin >> raio;
    area = (pow(raio, 2)*3.14159);
    printf("A=%.4f\n", area);
}