#include <iostream>
using namespace std;

int main() {
    // task 1
    float x, y;

    cout << "Enter x: " << endl;
    cin >> x;

    cout << "Enter y: " << endl;
    cin >> y;

    cout << "\nThe largest number is => " << (x > y? x : y) << endl;


    // task 2
    float temperature;

    cout << "Enter current temperature: " << endl;
    cin >> temperature;

    if (temperature >= -50 && temperature <= 50) {
        if (temperature > 27) {
            cout << "It's hot today";
        } else if (temperature <= 27 && temperature > 16) {
            cout << "It's warm today";
        } else if (temperature <= 16) {
            cout << "It's cold";
        }
    } else {
        cout << "Error | Incorrect temperature.";
    }

    return 0;
}
