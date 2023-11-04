#include <iostream>
#include <array>
using namespace std;

int main() {
  const int n = 10;
  array<int, n> arr = { 5, 7, 23, 74, 56, 12, 76, 12, 10, 6 };

  int max = arr[0];

  // default array
  cout << "Default array: ";
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }
  cout << arr[n - 1] << "." << endl;

  for (int i = 1; i < n; i+=2) {
    cout << arr[i] << " ";
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  cout << "\nMax: " << max << endl;
}
