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

    cout << "Введіть ім'я дерева: " << endl;
    cin >> tree.name;

    do {
      cout << "Введіть вік дерева: " << endl;
      cin >> tree.age;

      if (tree.age < 0 || tree.age > 5001) cout << "Некоректний вік дерева!" << endl;
    } while (tree.age < 0 || tree.age > 5001);

    do {
      cout << "Введіть висоту дерева: " << endl;
      cin >> tree.height;

      if (tree.height < 0 || tree.height > 2001) cout << "Некоректна висоту дерева! Введіть знову.." << endl;
    } while (tree.height < 0 || tree.height > 2001);

    cout << "Введіть колір дерева: " << endl;
    cin >> tree.color;

    trees[i] = tree;
  }
}

void outputTree(Tree trees[], int countTree) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < countTree; i++) {
    cout << "Ім'я дерева: " << trees[i].name << endl;
    cout << "Вік дерева: " << trees[i].age << endl;
    cout << "Колір дерева: " << trees[i].color << endl;
    cout << "Висота дерева: " << trees[i].height << endl;
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
    cout << "Введіть кількість дерев: " << endl;
    cin >> countTree;

    if (countTree < 0 || countTree > 11) cout << "Некоректна кількість дерев! Введіть знову.." << endl;
  } while (countTree < 0 || countTree > 11);

  inputTree(trees, countTree);

  cout << "---------------------" << endl;
  outputTree(trees, countTree);
  cout << "---------------------" << endl;

  cout << "Кількість дерев віком більше за 2: " << treeTwo(trees, countHighTwo, countTree) << endl;
  cout << "Середня висота дерев: " << avgHight(trees, countTree, averageHeight) << endl;
}
