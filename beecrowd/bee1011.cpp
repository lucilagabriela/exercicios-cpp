#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double raio, volume;
    cin >> raio;
    // volume = (4/3.0)*3,141*(pow(raio, 3));
    volume = (4/3)*3,141*pow(raio, 3);
    // cout << "VOLUME = " << volume << endl;
    printf("VOLUME = %.3f\n", volume);

    return 0;
}