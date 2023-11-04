#include <iostream>
using namespace std;

int main() {
  const int n = 10;
  int arr[n];

  for (int i = 1; i <= n; i++) {
    cout << "Enter num" << i << "(10 elems): ";
    cin >> arr[i - 1];
  }

  for (int i = 9; i >= 0; i--) {
    cout << arr[i] << endl;
  }

  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }

  cout << arr[n - 1] << ".";
}
