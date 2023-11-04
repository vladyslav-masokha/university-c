#include <iostream>
#include <array>
using namespace std;

int main() {
  const int n = 10;
  array<int, n> arr = {};

  int countNegative = 0;

  // default 
  for (int i = 0; i < n; i++) {
    arr[i] = (rand() % 200) - 100;
  }

  cout << "Default array: ";
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }
  cout << arr[n - 1] << ".";

  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      countNegative++;
    }
  }

  cout << "\nCount negative: " << countNegative;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {

    }
  }
}
