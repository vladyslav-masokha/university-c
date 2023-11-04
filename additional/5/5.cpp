#include <iostream>
using namespace std;

int main() {
  int amount, num, sum = 0;

  cout << "Enter amount: ";
  cin >> amount;

  if (amount > 0) {
    for (int i = 1; i <= amount; i++) {
      cout << "Enter num" << i << ": ";
      cin >> num;

      sum += pow(num, 2);
    }

    cout << "Sum: " << sum << endl;
  } else {
    cout << "Error | amount cannot be zero or negative";
  }

  return 0;
}
