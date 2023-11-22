#include <iostream>
using namespace std;

int main() {
  int numOperation;

  cout << "Enter num task (1, 2, 0 - additional): ";
  cin >> numOperation;

  if (numOperation == 1) {
    // task 1
    const int n = 5;
    int arr[n];
    float average = 0;

    cout << "Enter 5 nums: " << endl;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      average += arr[i];
    }

    cout << "Average => " << average / n << "\n" << endl;
  } else if (numOperation == 2) {
    // task 2
    float y = 0.0;
    for (int i = 2; i < 100; i++) {
      y = (i + 1);
      y /= (i + 2);
    }

    cout << "y => " << y << endl;
  } else if (numOperation == 0) {
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
  }
  return 0;
}
