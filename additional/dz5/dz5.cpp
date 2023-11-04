#include <iostream>
#include <array>
using namespace std;

int main() {
  // task 14
  int result = 0;
  array<int, 9> arr = {};

  for (int i = 0; i < arr.size(); i++) {
    cout << "Enter numbers: ";
    cin >> arr[i];
  }

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < 0) {
      result += arr[i];
    }
  }

  cout << "Result: " << result << endl;
}