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
  cout << "������ ������: ";
  cin >> tree.height;

  cout << "���� ������: ";
  cin >> tree.color;

  cout << "³� ������: ";
  cin >> tree.year;

  cout << "��'� ������: ";
  cin >> tree.name;
}

void outputTree(const Tree& tree) {
  cout << "������: " << tree.height;
  cout << "���� ������: " << tree.color;
  cout << "³� ������: " << tree.year;
  cout << "��'� ������: " << tree.name;
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  return 0;
}

