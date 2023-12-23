#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

struct Tree {
  int height;
  int color;
  int year;
  string name;
};

void inputTree(const Tree& tree) {
  cout << "Вмсота дерева: ";
  cin >> tree.height;

  cout << "Колір дерева: ";
  cin >> tree.color;

  cout << "Вік дерева: ";
  cin >> tree.year;

  cout << "Ім'я дерева: ";
  cin >> tree.name;
}

void outputTree(const Tree& tree) {
  cout << "Висота: " << tree.height;
  cout << "Колір дерева: " << tree.color;
  cout << "Вік дерева: " << tree.year;
  cout << "Ім'я дерева: " << tree.name;
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  return 0;
}

