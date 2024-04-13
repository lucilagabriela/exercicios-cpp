#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double raio, volume;
    cin >> raio;
    // volume = (4/3.0)*3,141*(pow(raio, 3));
    volume = (4.0/3.0)*3.14159*pow(raio, 3);
    // cout << "VOLUME = " << volume << endl;
    printf("VOLUME = %.3f\n", volume);

    return 0;
}

/*
#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double raio, volume, pi = 3.14159;
    
    cin >> raio;
    
    volume = (4/3.0)*pi*pow(raio, 3);
    
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
 
    return 0;
}
*/