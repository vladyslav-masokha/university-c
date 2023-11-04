#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, s, area;

    cout << "Enter side a: \n";
    cin >> a;

    cout << "Enter side b: \n";
    cin >> b;

    cout << "Enter side c: \n";
    cin >> c;

    s = (a + b + c) / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    if (area > 0) {
        cout << "Area: " << area << endl;
    } else {
        cout << "Error | Area cannot be negative." << endl;
    }

    return 0;
}