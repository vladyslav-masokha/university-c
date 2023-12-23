#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

struct Tree {
  string name, color;
  int age, height;
};

void inputTree(vector<Tree>& trees, int countTree) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < countTree; i++) {
    Tree tree;

    cout << "Введіть ім'я дерева: " << endl;
    cin >> tree.name;

    do {
      cout << "Введіть вік дерева: " << endl;
      cin >> tree.age;

      if (tree.age < 0 || tree.age > 5001) cout << "Некоректний вік дерева! Введіть знову.." << endl;
    } while (tree.age < 0 || tree.age > 5001);

    do {
      cout << "Введіть висоту дерева: " << endl;
      cin >> tree.height;

      if (tree.height < 0 || tree.height > 2001) cout << "Некоректна висоту дерева! Введіть знову.." << endl;
    } while (tree.height < 0 || tree.height > 2001);

    cout << "Введіть колір дерева: " << endl;
    cin >> tree.color;

    trees.push_back(tree);
  }
}

void outputTree(vector<Tree>& trees) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (const auto& tree : trees) {
    cout << "Ім'я дерева: " << tree.name << endl;
    cout << "Вік дерева: " << tree.age << endl;
    cout << "Колір дерева: " << tree.color << endl;
    cout << "Висота дерева: " << tree.height << endl;
    cout << endl;
  }
}

int treeTwo(vector<Tree>& trees, int countHighTwo) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (const auto& tree : trees) {
    if (tree.age >= 2) countHighTwo++;
  }

  return countHighTwo;
}

int avgHight(vector<Tree>& trees, int countTree, float averageHeight) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (const auto& tree : trees) {
    averageHeight += tree.height;
  }

  averageHeight /= countTree;
  return averageHeight;
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  vector<Tree> trees;
  int countTree, countHighTwo = 0;
  float averageHeight = 0.0;

  do {
    cout << "Введіть кількість дерев: " << endl;
    cin >> countTree;

    if (countTree < 0 || countTree > 11) cout << "Некоректна кількість дерев! Введіть знову.." << endl;
  } while (countTree < 0 || countTree > 11);

  inputTree(trees, countTree);
  outputTree(trees);
  // treeTwo(trees, countHighTwo);

  cout << "Кількість дерев віком більше за 2: " << treeTwo(trees, countHighTwo) << endl;

  // avgHight(trees, countTree, averageHeight);

  cout << "Середня висота дерев: " << avgHight(trees, countTree, averageHeight) << endl;
}
