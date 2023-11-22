#include <iostream>
#include <array>

using namespace std;

int main() {
  int arr[62] = {};
  int days;
  int temp;

  do {
    cout << "Enter days: ";
    cin >> days;

    if (days < 1 || days > 31) {
      cout << "Error | Days cannot be zero or negative!" << endl;
    }
  } while (days < 1 || days > 31);

  for (int i = 0; i < days * 2; i+=2) {
    cout << "Enter number " << i << ", " << i + 1 << ", day " << i / 2 << ": ";
    cin >> arr[i] >> arr[i + 1];
  }

  for (int i = 0; i < days * 2; i += 2) {
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }

  for (int i = 0; i < days * 2; i++) {
    cout << arr[i] << " ";
  }
}
