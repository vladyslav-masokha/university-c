#include <iostream>
using namespace std;

int main() {
    const int n = 7;
    string arrCurrencyName[n] = {"usd", "euro", "pln", "aud", "cad", "cny", "egp" };
    double arrCurrency[n] = {0.027, 0.025, 0.109, 0.040, 0.035, 0.25, 0.769};
    double countUAH;
    string value, userCont;
    bool userContinue = false;

    do {
        cout << "\nEnter your currency..." << "\n";
        cin >> value;

        for (int i = 0; i < n; i++) {
            if (arrCurrencyName[i] == value) {
                cout << "Enter countUAH uah to " << value << ": " << endl;
                cin >> countUAH;

                if (countUAH > 0) {
                    cout << countUAH << " uah => " << countUAH * arrCurrency[i] << " " << value << "\n" << endl;
                } else {
                    cout << "Error | UAH: repeat please..\n";
                }
            }
        }

        cout << "Do you want continue?\n";
        cin >> userCont;

        if (userCont == "y" || userCont == "yes") {
            userContinue = true;
        } else {
            cout << "You canceled this operation";
            userContinue = false;
        }
    }
    while (userContinue);
    return 0;
}
