#include <iostream>
using namespace std;

int main() {
  char task;
  float f = 0, x, a, b;

  cout << "Enter task (a or b): ";
  cin >> task;

  // x = 3
  // a = 4
  // b = 32
  // c = 12
  // result: 171
  if (task == 'a' || task == 'b') {
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if (task == 'a') {
      float c;

      cout << "Enter c: ";
      cin >> c;

      f = pow(x, 3) + a * pow(x, 2) + b * x + c;
    } else if (task == 'b') {
      f = tan(a) - abs(b - 3 * a + 2 / cbrt(a + 4));
    }

    cout << "F: " << f << endl;
  } else {
    cout << "This task doesn't exist!";
  }
}
