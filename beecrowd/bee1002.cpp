#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double raio, area;
    cin >> raio;
    area = (pow(raio, 2)*3.14159);
    printf("A=%.4f\n", area);
}

// printf("%.xf\n", var);

/* 
#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double raio, n = 3.14159, A;
    cin >> raio;
    A = n * raio * raio;
    cout << "A=" << fixed << setprecision(4) << A << endl;
 
    return 0;
}
*/