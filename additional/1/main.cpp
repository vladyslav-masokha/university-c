#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
    double a, z1, z2;

    cout << "Enter a: " << endl;
    cin >> a;

    z1 = (pow(cos(((3/8) * PI) - (a/4)) ,2)) - pow(cos((11/8) * PI + (a/4)) ,2);
    cout << "z1 => " << z1 << endl;

    z2 = sqrt(2) / 2 * sin(a/2);
    cout << "z2 => " << z2 << endl;

    cout << 57 % 26;
    return 0;
}
