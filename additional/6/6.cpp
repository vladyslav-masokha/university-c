#include <iostream>
using namespace std;

int main() {
  const int n = 9;
  int num, sum = 0;

  for (int i = 1; i <= n;) {
    cout << "Enter num: ";
    cin >> num;

    if (num >= -3 && num <= 16) {
      if (num % 2 == 0) {
        sum += num;
        i++;
      } else {
        cout << "Num is odd!" << endl;
      }
    } else {
      cout << "The number is out of range!" << endl;
    }
  }

  cout << "Sum: " << sum << endl;
}