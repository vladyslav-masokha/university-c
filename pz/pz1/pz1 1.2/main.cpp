#include <iostream>
using namespace std;

int main() {
    float cm, ft = 30.48, boy, difference;
    bool userContinue = false;
    string continues;

    do {
        cout << "Enter the girl's height (cm): \n";
        cin >> cm;

        cout << "Enter boy's height (ft):  \n";
        cin >> boy;

        difference = boy * ft;

        if (cm > 50 && difference > 50) {
            if (cm < boy * ft) {
                cout << "The difference in the height of a boy and a girl: " << difference - cm << " cm" << endl;
            } else {
                cout << "The difference in the height of a boy and a girl: " << cm - difference << " cm" << endl;
            }
        } else {
            cout << "A person cannot be shorter than 50 cm, repeat please... \n";
        }

        cout << "Do you want continue?";
        cin >> continues;

        if (continues == "y" || continues == "yes") {
            userContinue = true;
        } else {
            cout << "You canceled this operation";
            userContinue = false;
        }

    } while (userContinue);

    return 0;
}
