#include <iostream>
using namespace std;

int main() {
    // task 1
    const int n = 5;
    int arr[n];
    float average = 0;

    cout << "Enter 5 nums: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        average += arr[i];
    }

    cout << "Average 1 => " << average / n << "\n" << endl;

    // additional task
    const int m = 10;
    int array[m];
    float avg = 0;

    for (int i = 0; i < m; i++) {
        array[i] = rand();
        cout << array[i] << endl;

        avg += array[i];
    }

    cout << "Average => " << avg / m << endl;

    // task 2
    float y = 0.0;
    for (int i = 2; i < 100; i++) {
        if ((i + 2) != 0) {
            // always zero !!!
            y = (i + 1) / (i + 2);
        } else {
            cout << "Error | (i + 2) Cannot be zero";
        }
    }

    cout << "y => " << y << endl;
    return 0;
}
