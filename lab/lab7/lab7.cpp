#include <iostream>
using namespace std;

int main() {
  const int n = 10;
  int k[n] = {};

  k[0] = 1;
  k[1] = 1;

  for (int i = 2; i < n; i++) {
    k[i] = k[i - 1] + k[i - 2];
  }

  for (int i = 0; i < n - 1; i++) {
    cout << k[i] << ", ";
  }

  cout << k[n - 1] << ".";
}
