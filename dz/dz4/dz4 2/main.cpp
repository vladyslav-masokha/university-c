#include <iostream>
using namespace std;

int main() {
    float num1, num2, sum;

    cout << "Enter num1: \n";
    cin >> num1;

    cout << "Enter num2: \n";
    cin >> num2;

    sum = num1 + num2;

    sum < 0 ? sum *= -2 : sum *= 3;

    cout << "Result: " << sum << endl;
    return 0;
}
