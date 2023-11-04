#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter num1: " << endl;
    cin >> num1;

    cout << "Enter num2: " << endl;
    cin >> num2;

    if (num1 == num2) {
        cout << "Both numbers are equal";
    } else {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }

        cout << "Num1: " << num1 << endl;
        cout << "Num2: " << num2 << endl;
    }

    return 0;
}
