#include <iostream>
using namespace std;

int main() {
    float miles, km = 1.609344, result;
    string userContinue;
    bool isContinue = false;

    do {
        cout << "Enter count miles: \n";
        cin >> miles;

        if (miles >= 0) {
            result = miles * km;
            cout << miles << " miles => " << result << " km" << endl;
        } else {
            cout << "A kilometer cannot be negative, repeat please...";
        }

        cout << "Do you want continue? (y, yes or n, no) \n";
        cin >> userContinue;

        if (userContinue == "y" || userContinue == "yes") {
            isContinue = true;
        } else if (userContinue == "n" || userContinue == "no") {
            cout << "You canceled this operation!";
            isContinue = false;
        } else {
            cout << "The answer is incorrect..";
        }

    } while (isContinue);

    return 0;
}
