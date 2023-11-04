#include <iostream>
using namespace std;

int main() {
    // 28
    float s, f, l, h, k, g;

    cout << "Enter s: " << endl;
    cin >> s;

    if (s > 0) {
        cout << "Enter f: " << endl;
        cin >> f;

        cout << "Enter l: " << endl;
        cin >> l;

        g = f - 2 * l;
        cout << "G => " << g << endl;
    } else if (s <= 0) {
        cout << "Enter h: " << endl;
        cin >> h;

        cout << "Enter k: " << endl;
        cin >> k;

        if (h + k != 0) {
            g = (h - k) / (h + k);
            cout << "G => " << g << endl;
        } else {
            cout << "(h + h = 0) => Cannot be zero";
        }
    }

    return 0;
}
