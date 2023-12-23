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

    cout << "������ ��'� ������: " << endl;
    cin >> tree.name;

    do {
      cout << "������ �� ������: " << endl;
      cin >> tree.age;

      if (tree.age < 0 || tree.age > 5001) cout << "����������� �� ������! ������ �����.." << endl;
    } while (tree.age < 0 || tree.age > 5001);

    do {
      cout << "������ ������ ������: " << endl;
      cin >> tree.height;

      if (tree.height < 0 || tree.height > 2001) cout << "���������� ������ ������! ������ �����.." << endl;
    } while (tree.height < 0 || tree.height > 2001);

    cout << "������ ���� ������: " << endl;
    cin >> tree.color;

    trees.push_back(tree);
  }
}

void outputTree(vector<Tree>& trees) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (const auto& tree : trees) {
    cout << "��'� ������: " << tree.name << endl;
    cout << "³� ������: " << tree.age << endl;
    cout << "���� ������: " << tree.color << endl;
    cout << "������ ������: " << tree.height << endl;
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
    cout << "������ ������� �����: " << endl;
    cin >> countTree;

    if (countTree < 0 || countTree > 11) cout << "���������� ������� �����! ������ �����.." << endl;
  } while (countTree < 0 || countTree > 11);

  inputTree(trees, countTree);
  outputTree(trees);
  // treeTwo(trees, countHighTwo);

  cout << "ʳ������ ����� ���� ����� �� 2: " << treeTwo(trees, countHighTwo) << endl;

  // avgHight(trees, countTree, averageHeight);

  cout << "������� ������ �����: " << avgHight(trees, countTree, averageHeight) << endl;
}
