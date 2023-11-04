#include <iostream>
#include "cmath"
using namespace std;

int main() {
    double x, y, a, b;

    cout << "Enter x: " << endl;
    cin >> x;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    // if 1
    // x = 4
    // a = 4
    // b = 4
    // y = -5,67196429

    // if 2
    // x = -3
    // a = 3
    // b = 3
    // y = -7,06819938

    if (x > 3) {
        if ((sin(x) + cos(x)) != 0) {
            y = (a + x) / (sin(x) + cos(x));
            cout << "y: " << y << endl;
        } else {
            cout << "(sin" << x << " + cos" << x << ") Cannot be zero" << endl;
        }
    } else if (x <= -3) {
        if ((cos(x) - sin(x)) != 0) {
            y = (b - x) / (cos(x) - sin(x));
            cout << "y: " << y << endl;
        }
    } else {
        cout << "Incorrect x, repeat please..";
    }

    return 0;
}
