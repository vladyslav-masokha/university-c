
#include <iostream>
using namespace std;

int main() {
  const int n = 5;
  float avgMarks[n] = {};
  int max, numClass = 0;

  for (int i = 0; i < n; i++) {
    cout << "Enter average mark class " << i + 1 << ": ";
    cin >> avgMarks[i];
  }

  max = avgMarks[0];

  for (int i = 1; i <= n; i++) {
    if (avgMarks[i] > max) {
      max = avgMarks[i];
      numClass = i;
    }
  }

  for (int i = 0; i < n; i++) {
    if (max == avgMarks[i]) {
      cout << "Number class: " << i + 1 << "\n" << "Mark: " << avgMarks[i] << endl;
    }
  }
}
