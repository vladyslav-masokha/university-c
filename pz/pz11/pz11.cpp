#include <iostream>
#include <windows.h>
#define MAX 100
using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int n, x = 5;

  do {
    cout << "������ ������� ���������: ";
    cin >> n;

    if (n < 1) {
      cout << "������� | ������� �������� �� ���� ���� ����� �������!" << endl;
    }
  } while (n < 1);

  int In[MAX], Out[MAX] = {};
  int mark;

  for (size_t i = 0; i < n; i++) {
    do {
      cout << "������ ��� " << i + 1 << " �������� �� 0 �� 10:";
      cin >> mark;

      if (mark < 0 || mark > 10) {
        cout << "������� | ��� �� ���� ���� ����� ���� �� ����� �� ������!" << endl;
      } else {
        In[i] = mark;
      }
    } while (mark < 0 || mark > 10);
  }

  cout << "���� ��� �������� - ";
  for (size_t i = 0; i < n - 1; i++) {
    cout << In[i] << ", ";
  }

  cout << In[n - 1] << "." << endl;

  int members = 0, member = 0;

  for (size_t i = 0; i < n; i++) {
    if (In[i] >= x) {
      Out[member++] = In[i];
      members++;
    } else {
      cout << "������� " << i + 1 << " �� ������� ����!" << endl;
    }
  }

  if (members == 0) {
    cout << "����� � �������� �� ������� ����!";
  } else {
    cout << "���� �������� �� ������� ���� - ";
    for (size_t i = 0; i < members - 1; i++) {
      cout << Out[i] << ", ";
    }

    cout << Out[members - 1] << ".";
  }

  return 0;
}
