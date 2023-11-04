#include <iostream>
using namespace std;

int main() {
  cout << "\xDA";

  for (int i = 0; i < 3; i++) {
    std::cout << "\xC4";
  }

  cout << "\xC0" << endl;

  return 0;
}
