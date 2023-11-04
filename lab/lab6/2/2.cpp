#include <iostream>
using namespace std;

int main() {
  float total;

  cout << "Enter the total purchase price: ";
  cin >> total;

  if (total > 0) {
    total /= 2;
    cout << "Katya spent " << total << " $, and Peter and Serhiy spent " << (total / 2) << " $ each.";
  } else {
    cout << "Error | total cannot be zero or negative";
  }
}
