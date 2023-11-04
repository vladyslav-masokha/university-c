#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    float weight, min, max;
    bool err = false;

    cout << "Enter amount n(parcels): " << endl;
    cin >> n;

    if (n > 0) {
        cout << "Enter weight parcel: " << i << endl;
        cin >> weight;

        if (weight > 0) {
            min = weight;
            max = weight;

            for (i = 1; i < n - 1; i++) {
                cout << "Enter weight parcel " << i << endl;
                cin >> weight;

                if (weight > 0) {
                    i++;
                    if (weight < min) min = weight;
                    if (weight > max) max = weight;
                } else {
                    cout << "Error | Weight cannot be zero or negative!" << endl;
                }
            }

            cout << "Min => " << min << endl;
            cout << "Max => " << max << endl;
        } else {
            cout << "Error | Weight cannot be zero or negative!" << endl;
        }
    } else {
        cout << "Error | amount cannot be negative!" << endl;
    }
    return 0;
}
