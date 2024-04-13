#include <iostream>
using namespace std;

int main() {
    double n1, n2, media;
    cin >> n1 >> n2;
    media = ((n1*3.5)+(n2*7.5))/(11);
    printf("MEDIA = %.5f\n", media);

    return 0;
}

/*
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A, B, MEDIA;
    cin >> A >> B;
    
    MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);
    
    cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;
 
    return 0;
}
*/