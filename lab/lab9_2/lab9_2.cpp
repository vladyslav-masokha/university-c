#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  const int rows = 3;
  const int columns = 5;

  int matrix[rows][columns];

  // ���������� ��������� �������
  for (size_t i = 0; i < rows; i++) {
    for (size_t j = 0; j < columns; j++) {
      matrix[i][j] = rand() % 51 - 20;
    }
  }

  // ��������� ��������� �������
  cout << "��������� �������: " << endl;
  for (size_t i = 0; i < rows; i++) {
    for (size_t j = 0; j < columns; j++) {
      cout << matrix[i][j] << " ";
    }

    cout << endl;
  }

  if (columns % 2 == 1 && rows % 2 == 1) {
    cout << "\n����������� �������: " << matrix[rows / 2][columns / 2] << endl;
  } else {
    cout << "\n����������� ������� �� ���������!";
  }

}
