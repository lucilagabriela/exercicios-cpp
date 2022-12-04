# include <iostream>
# include <math.h>
using namespace std;

int main() {
    float raio, area;
    cout << "Digite o raio: " << endl;
    cin >> raio;
    area = (M_PI)*(pow(raio, 2));
    // cout.precision(2);
    cout << "A área é: " << area << endl;

    return 0;
}