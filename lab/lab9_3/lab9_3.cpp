#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  const int n = 5;

  int matrix[n][n];

  // ��������� �������
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      matrix[i][j] = 0;
    }
  }

  for (size_t i = 0; i < n; i++) {
    matrix[i][i] = 1;
  }

  cout << "��������� �������: " << endl;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }

    cout << endl;
  }
}
