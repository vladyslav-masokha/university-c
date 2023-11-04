#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, x2, x3, y1, y2, y3, area;

    cout << "Enter coordinates x1: \n";
    cin >> x1;

    cout << "Enter coordinates y1: \n";
    cin >> y1;

    cout << "Enter coordinates x2: \n";
    cin >> x2;

    cout << "Enter coordinates y2: \n";
    cin >> y2;

    cout << "Enter coordinates x3: \n";
    cin >> x3;

    cout << "Enter coordinates y3: \n";
    cin >> y3;

    area = 0.5 * abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    if (area > 0) {
        cout << "Area: " << area << endl;
    } else {
        cout << "Error | Area cannot be negative." << endl;
    }

    return 0;
}