#include <iostream>
using namespace std;

int main() {
    int age;
    string message;

    cout << "Enter your age: " << endl;
    cin >> age;

    message = age >= 18 ?
            "Perfectly. You can now drive a car." :
            "Unfortunately, it's too early for you to drive!";

    cout << message << endl;
    return 0;
}
