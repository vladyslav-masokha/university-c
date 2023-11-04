#include <iostream>
#include "cmath"
using namespace std;

int main() {
    double a, b, x, y;

    cout << "Enter x: " << endl;
    cin >> x;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    //  <-- if 1 -->
    // x = -3
    // a = 1
    // b = 3

    // <-- if 2 -->
    // x = 6
    // a = 2
    // b = 3

    // <-- if 3 -->
    // x = 0
    // a = 1
    // b = 0

    // 1
    if (x < 0) {
        if (x - a != 0) {
            y = ((pow(x, 2) + 1) / (x - a)) + b;
            cout << "if 1 => y: " << y << endl;
        } else {
            cout << "(x - a) Cannot be zero" << endl;
        }

        // 2
    } else if (x > 0) {
        if (x - pow(a, 2) > 0) {
            y = sqrt(x - pow(a, 2));
            cout << "if 2 => y: " << y << endl;
        } else {
            cout << "(x - a^2) Cannot be negative" << endl;
        }
    } else {
        if (a != 0) {
            y = b - 1 / a;
            cout << "if 3 => y: " << y << endl;
        } else {
            cout << "a Cannot be zero" << endl;
        }
    }

    return 0;
}
