#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  char board[3][3] = { {'1','2','3'},{'4','5','6'}, {'7','8','9'} };
  int current = 1;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }

  int movement;

  for (int i = 0; i < 9; i++) {
    cout << "Enter the number of the movement: ";
    cin >> movement;
    int row = (movement - 1) / 3;
    int col = (movement - 1) % 3;
    if (movement >= 1 && movement <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
      board[row][col] = current == 1 ? 'X' : 'O';
      if (current == 1) {
        current++;
      } else {
        current--;
      }
    } else {
      cout << "Недійсний рух" << endl;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}