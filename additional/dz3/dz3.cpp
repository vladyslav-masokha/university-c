#include <iostream>
using namespace std;

int main() {
  int x, c, a, b = 0, f, conditionNum;
  string condition;

  cout << "Enter x: ";
  cin >> x;

  cout << "Enter c: ";
  cin >> c;

  cout << "Enter a: ";
  cin >> a;

  if (x + c < 0 && a != 0) {
    conditionNum = 1;
  } else if (x + c > 0 && a == 0 && x - c != 0) {
    conditionNum = 2;
  } else {
    if (c != 0 && x != 0) {
      conditionNum = 3;
    } else {
      cout << "x & c cannot be zero!";
    }
  }

  switch (conditionNum) {
  case 1:
    condition = "condition 1: x + c < 0 && a != 0 => ";

    cout << "Enter b: ";
    cin >> b;

    f = -a * pow(x, 3) - b;
    break;
  case 2:
    condition = "condition 2: x + c > 0 && a == 0 => ";
    f = (x - a) / (x - c);
    break;
  case 3:
    condition = "condition 3: else => ";
    f = (x / c) + (c / x);
    break;
  }

  cout << "Entered initial data - x,a,b,c: " << endl;
  if (b != 0) {
    cout << "x: " << x << "\n" << "a: " << a << "\n" << "b: " << b << "\n" << "c: " << c << endl;
  } else {
    cout << "x: " << x << "\n" << "a: " << a << "\n" << "c: " << c << endl;
  }

  cout << condition << f << endl;

  return 0;
}