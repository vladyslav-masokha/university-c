#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, x2, y1, y2, distance;

    cout << "Enter coordinates x1: \n";
    cin >> x1;

    cout << "Enter coordinates y1: \n";
    cin >> y1;

    cout << "Enter coordinates x2: \n";
    cin >> x2;

    cout << "Enter coordinates y2 \n";
    cin >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > 0) {
        cout << "Distance: " << distance << endl;
    } else {
        cout << "Error | distance cannot be negative..";
    }

    return 0;
}