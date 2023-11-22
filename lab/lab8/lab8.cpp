#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int numTask;

  do {
    cout << "������ ����� �������� (1 ��� 2): ";
    cin >> numTask;

    if (numTask != 1 && numTask != 2) {
      cout << "�������! ������ ��������� ����� ��������.." << endl;
    }
  } while (numTask != 1 && numTask != 2);

  if (numTask == 1) {
    // const int rows = 5, column = 5;
    // const int rows = 7, column = 7;
    const int rows = 10, column = 10;
    int matrix[rows][column];

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < column; j++) {
        matrix[i][j] = rand() % 201 - 100;
      }
    }

    cout << "��������� �������: " << endl;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < column; j++) {
        cout << matrix[i][j] << " ";
      }

      cout << endl;
    }

    int min = abs(matrix[0][0]);
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < column; j++) {
        if (abs(matrix[i][j]) < min && abs(matrix[i][j]) != 0) {
          min = abs(matrix[i][j]);
        }
      }
    }
    cout << "\n̳���� � �������: " << min << endl;
    cout << "̳���� ��� ������: " << -min << endl;

    cout << "\n������ �������: " << endl;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < column; j++) {
        cout << matrix[i][j] + min << " ";
      }

      cout << endl;
    }
  } else if (numTask == 2) {
    const int rows = 5, columns = 3;
    int matrix[rows][columns];

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        matrix[i][j] = rand() % 50 - 20;
      }
    }

    cout << "��������� �������: " << endl;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        cout << matrix[i][j] << " ";
      }

      cout << endl;
    }

    cout << "��������� �������� � �������� ��������: " << endl;
    for (int i = 0; i < columns; i++) {
      for (int j = 0; j < rows; j++) {
        if (j % 2 == 0) cout << matrix[j][i] << " ";
      }
      cout << endl;
    }
  }
}
