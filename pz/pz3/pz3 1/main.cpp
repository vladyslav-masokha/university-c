#include <iostream>
using namespace std;

int main() {
    int numMonth, year;

    cout << "Enter number month 1 - 12: " << endl;
    cin >> numMonth;

    cout << "Enter current year: " << endl;
    cin >> year;

    if (year > 0) {
        switch (numMonth) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << 31;
                break;
            case 2:
                cout << ((year % 4 == 0 && year % 400 == 0) || year % 100 != 0 ? 29 : 28);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                cout << 30;
                break;
            default:
                cout << (numMonth < 1 || numMonth > 12 ? "Error" : "") << endl;
        }
    } else {
        cout << "Incorrect year";
    }

    return 0;
}
