#include <iostream>
#include "cmath"
using namespace std;

int main() {
    const int amount = 5;
    int i = 1, n, average = 0;

    cout << "Enter your " << i << " mark: " << endl;
    cin >> n;

    if (n >= 0 && n <= 12) {
        average += n;

        for (i = 2; i <= amount; i++) {
            cout << "Enter your " << i << " mark: " << endl;
            cin >> n;

            if (n >= 0 && n <= 12) {
                average += n;
            } else {
                cout << "Error | Your mark cannot be negative!";
                break;
            }
        }

        average = floor(average / amount);

        switch (average) {
            case 0:
                cout << "Your mark: " << average << " - bad";
                break;
            case 1:
            case 2:
            case 3:
                cout << "Your mark: " << average << " - unsatisfactorily";
                break;
            case 4:
            case 5:
            case 6:
                cout << "Your mark: " << average << " - satisfactorily";
                break;
            case 7:
            case 8:
            case 9:
                cout << "Your mark: " << average << " - good";
                break;
            case 10:
            case 11:
            case 12:
                cout << "Your mark: " << average << " - perfectly";
                break;
            default:
                cout << "The mark cannot be less than 0 and more than 12.";
        }

    } else {
        cout << "Error | Your mark cannot be negative!";
    }
    return 0;
}
