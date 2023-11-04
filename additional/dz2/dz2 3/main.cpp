#include <iostream>
#include "cmath"
using namespace std;

int main() {
    float k, s, w, r, q;

    cout << "Enter k: " << endl;
    cin >> k;

    cout << "Enter s: " << endl;
    cin >> s;

    if (k < (s / 3)) {
        cout << "Enter r: " << endl;
        cin >> r;

        cout << "Enter w: " << endl;
        cin >> w;

        if (r > 0) {
            q = w - sqrt(1 / r);
            cout << "q => " << q << endl;
        } else {
            cout << "Error | r => Cannot be zero or negative";
        }
    } else if (k >= (s / 3)) {
        cout << "Enter r: " << endl;
        cin >> r;

        cout << "Enter w: " << endl;
        cin >> w;

        if (r != 0 && (r + w) > 0) {
            q = (w / abs(r) + sqrt(r + w));
            cout << "q => " << q << endl;
        } else {
            cout << (r == 0 ? "Error | r = 0" : "Error | (r + w) <= 0");
        }
    }

    return 0;
}
