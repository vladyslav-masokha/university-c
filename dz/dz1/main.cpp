#include <iostream>
using namespace std;

int main() {
    double mp = 30.48;
    int ft = 0, cm = 0, result = ft * mp;;

    cout << "Enter a first height in ft: ";
    cin >> ft;

    cout << "Enter a second height in cm: ";
    cin >> cm;

    cout << " " << endl;
    cout << "First Height: " << result << "\nSecond Height: " << cm << "\nDifference: " << result - cm << endl;
}