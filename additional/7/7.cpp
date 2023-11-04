#include <iostream>
#include <array>
using namespace std;

int main() {
  const int n = 11;
  int min = 0, max = 0;

  array<int, n> arr = {};

  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }
  cout << arr[n - 1] << "." << endl;

  min = arr[0];
  for (int i = 0; i < n; i += 2) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }

  cout << "Min: " << min << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] > 0 && i % 2 == 0) {
      cout << arr[i] << " ";
    }
  }
}
