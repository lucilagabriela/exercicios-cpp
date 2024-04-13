#include <iostream>
using namespace std;

int main() {
    double A, B, C, media;
    cin >> A >> B >> C;
    media = ((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1f\n", media);

    return 0;
}

/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    double A, B, C, MEDIA;
    cin >> A >> B >> C;
    
    MEDIA = ((A*2)+(B*3)+(C*5))/(2+3+5);
    
    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;
 
    return 0;
}
*/