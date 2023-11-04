#include <iostream>
using namespace std;

int main() {
  const float PI = 3.14;
  float r, area;

  cout << "Enter radius: ";
  cin >> r;

  if (r > 0) {
    area = PI * pow(r, 2);

    cout << "Area of a circle: " << area << endl;
  } else {
    cout << "Radius cannot be zero or negative";
  }

  return 0;
}
