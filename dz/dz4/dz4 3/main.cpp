#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;

    cout << "Enter num1: \n";
    cin >> num1;

    cout << "Enter num2: \n";
    cin >> num2;

    result = (num1 + num2) % 2 == 0 ? num1 *= num2 : num1 % num2;
    cout << "Result: " << result << endl;
    return 0;
}
