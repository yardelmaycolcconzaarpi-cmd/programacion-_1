#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float b,a,c;

    cout << "Ingresa la base : ";
    cin >> b;
    
    cout <<"ingrese la altura : ";
    cin >> a;
    c = sqrt((a*a)+(b*b));

    cout << "El valor de c es:" << c << endl;

    return 0;
}
