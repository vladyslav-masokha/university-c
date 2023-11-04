#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float side1, side2, area;
    double side3;

    cout << "Enter side 1: \n";
    cin >> side1;

    cout << "Enter side 2: \n";
    cin >> side2;

    if (side1 != 0 || side2 != 0) {
        side3 = sqrt(pow(side1, 2) + pow(side2, 2));
        cout << "Side 3 => " << side3;
    } else {
        cout << "Side cannot be negative!";
    }

    return 0;
}
