#include <iostream>
#include <windows.h>
#define MAX 100
using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int n, x = 5;

  do {
    cout << "Введіть кількість кандидатів: ";
    cin >> n;

    if (n < 1) {
      cout << "Помилка | кількість учасників не може бути менше одиниці!" << endl;
    }
  } while (n < 1);

  int In[MAX], Out[MAX] = {};
  int mark;

  for (size_t i = 0; i < n; i++) {
    do {
      cout << "Введіть бал " << i + 1 << " учасника від 0 до 10:";
      cin >> mark;

      if (mark < 0 || mark > 10) {
        cout << "Помилка | бал не може бути менше нуля та більше за десять!" << endl;
      } else {
        In[i] = mark;
      }
    } while (mark < 0 || mark > 10);
  }

  cout << "Бали всіх учасників - ";
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
      cout << "Учасник " << i + 1 << " не пройшов відбір!" << endl;
    }
  }

  if (members == 0) {
    cout << "Жоден з учасників не пройшов відбір!";
  } else {
    cout << "Бали учасників які пройшли відбір - ";
    for (size_t i = 0; i < members - 1; i++) {
      cout << Out[i] << ", ";
    }

    cout << Out[members - 1] << ".";
  }

  return 0;
}
