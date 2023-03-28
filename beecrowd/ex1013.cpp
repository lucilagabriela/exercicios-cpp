#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
    float a, b, c, maiorAB, maior;
    cin >> a >> b >> c;

    maiorAB = (a + b + abs(a-b))/2;
    maior = maiorAB;
    maiorAB = (maior + c + abs(maior-c))/2;
    maior = maiorAB;
    cout << maiorAB << endl;
    return 0;
}