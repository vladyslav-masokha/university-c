#include <iostream>
using namespace std;

int main() {
  int numOperation;

  cout << "Enter number task 1 or 2: ";
  cin >> numOperation;

  // task 1
  // варіант 2
  if (numOperation == 1) {
    float x, y;
    cout << "Enter the x coordinate: ";
    cin >> x;

    cout << "Enter the y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0) {
      cout << "The point is in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
      cout << "The point is in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
      cout << "The point is in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
      cout << "The point is in the fourth quadrant." << endl;
    } else if (x == 0 && y == 0) {
      cout << "The point is at the origin." << endl;
    } else {
      cout << "The point is on one of the coordinate axes." << endl;
    }
    // task 2
    // варіант 6
  } else if (numOperation == 2) {
    int num;

    cout << "Enter num (0-9): ";
    cin >> num;

    switch (num) {
    case 0:
      cout << "zero" << endl;
      break;
    case 1:
      cout << "one" << endl;
      break;
    case 2:
      cout << "two" << endl;
      break;
    case 3:
      cout << "three" << endl;
      break;
    case 4:
      cout << "four" << endl;
      break;
    case 5:
      cout << "five" << endl;
      break;
    case 6:
      cout << "six" << endl;
      break;
    case 7:
      cout << "seven" << endl;
      break;
    case 8:
      cout << "eight" << endl;
      break;
    case 9:
      cout << "nine" << endl;
      break;
    }
  } else {
    cout << "Error" << endl;
  }
}
