#include <iostream>
#include <windows.h>
#define ROWS 3
#define COLUMNS 5
using namespace std;
// Дана двовимірна матриця, обчислити суму по рядках та суми по стопчиках і визначити в якому рядку чи стовпчику знаходиться максимальна сума.

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int matrix[ROWS][COLUMNS];
  int sum, max1 = 0, max2 = 0, avg;
  int iMax, jMax;

  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLUMNS; j++) {
      matrix[i][j] = rand() % 200 - 50;
    }
  }

  cout << "Початкова матриця: " << endl;
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLUMNS; j++) {
      cout << matrix[i][j] << " ";
    }

    cout << endl;
  }

  // Сума по рядках
  for (size_t j = 0; j < COLUMNS; j++) {
    max1 += matrix[0][j];
  }

  for (size_t i = 1; i < ROWS; i++) {
    sum = 0;

    for (size_t j = 0; j < COLUMNS; j++) {
      sum += matrix[i][j];
    }

    if (max1 < sum) {
      max1 = sum;
      iMax = i + 1;
    }
  }

  // Сума по стовпцях
  for (size_t i = 0; i < COLUMNS; i++) {
    max2 += matrix[0][i];
  }

  for (size_t i = 0; i < COLUMNS; i++) {
    sum = 0;

    for (size_t j = 0; j < ROWS; j++) {
      sum += matrix[j][i];

      if (max2 < sum) {
        max2 = sum;
        jMax = j + 1;
      }
    }
  }
  cout << "Максимальне число по рядках: " << max1 << endl;
  cout << "Максимальне число по стовпцях: " << max2 << endl;

  if (max1 > max2) {
    cout << "Максимальне число: " << max1 << " знаходиться в " << iMax << " рядку" << endl;
  } else {
    cout << "Максимальне число: " << max2 << " знаходиться в " << jMax << " стовпчику" << endl;
  }
}
