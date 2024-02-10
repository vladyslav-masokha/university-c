#include <iostream>
#include <windows.h>

#define MAX_TREES 10
using namespace std;

struct Tree {
  string name, color;
  int age, height;
};

void inputTree(Tree trees[], int countTree) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < countTree; i++) {
    Tree tree;

    cout << "������ ��'� ������: " << endl;
    cin >> tree.name;

    do {
      cout << "������ �� ������: " << endl;
      cin >> tree.age;

      if (tree.age < 0 || tree.age > 5001) cout << "����������� �� ������!" << endl;
    } while (tree.age < 0 || tree.age > 5001);

    do {
      cout << "������ ������ ������: " << endl;
      cin >> tree.height;

      if (tree.height < 0 || tree.height > 2001) cout << "���������� ������ ������! ������ �����.." << endl;
    } while (tree.height < 0 || tree.height > 2001);

    cout << "������ ���� ������: " << endl;
    cin >> tree.color;

    trees[i] = tree;
  }
}

void outputTree(Tree trees[], int countTree) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < countTree; i++) {
    cout << "��'� ������: " << trees[i].name << endl;
    cout << "³� ������: " << trees[i].age << endl;
    cout << "���� ������: " << trees[i].color << endl;
    cout << "������ ������: " << trees[i].height << endl;
    cout << endl;
  }
}

int treeTwo(Tree trees[], int countHighTwo, int countTree) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < countTree; i++) {
    if (trees[i].age >= 2) countHighTwo++;
  }

  return countHighTwo;
}

float avgHight(Tree trees[], int countTree, float averageHeight) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < countTree; i++) {
    averageHeight += trees[i].height;
  }

  averageHeight /= countTree;
  return averageHeight;
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  Tree trees[MAX_TREES];
  int countTree, countHighTwo = 0;
  float averageHeight = 0;

  do {
    cout << "������ ������� �����: " << endl;
    cin >> countTree;

    if (countTree < 0 || countTree > 11) cout << "���������� ������� �����! ������ �����.." << endl;
  } while (countTree < 0 || countTree > 11);

  inputTree(trees, countTree);

  cout << "---------------------" << endl;
  outputTree(trees, countTree);
  cout << "---------------------" << endl;

  cout << "ʳ������ ����� ���� ����� �� 2: " << treeTwo(trees, countHighTwo, countTree) << endl;
  cout << "������� ������ �����: " << avgHight(trees, countTree, averageHeight) << endl;
}
