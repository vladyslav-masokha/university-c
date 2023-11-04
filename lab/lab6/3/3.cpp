#include <iostream>
using namespace std;

int main() {
  int h1, h2, m1, m2, s1, s2, interval;

  cout << "Enter first moment (hour, minute, second): ";
  cin >> h1 >> m1 >> s1;

  cout << "Enter secont moment (hour, minute, second): ";
  cin >> h2 >> m2 >> s2;

  if (h1 > 0 && h2 > 0 && m1 > 0 && m2 > 0 && s1 > 0 && s2 > 0) {
    interval = (3600 * (h2 - h1)) + (60 * (m2 - m1)) + s2 - s1;
    cout << "Interval: " << interval;
  } else {
    cout << "First or second moment cannot be negative";
  }
}