#include <iostream>
#include <windows.h>
using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int numTask;

  do {
    cout << "Введіть номер завдання: ";
    cin >> numTask;

    if (numTask < 1 || numTask > 5) {
      cout << "Помилка! Виберіть завдання від 1 до 5!" << endl;
    } else {
      if (numTask == 1) {
        int variable1 = 123;
        int* variable1Memory = &variable1;

        cout << "Значення за замовчуванням: " << *variable1Memory << endl;
        cout << "Адреса в пам'яті: " << variable1Memory << endl;

        *variable1Memory = 2023;
        cout << endl;
        cout << "Змінене значення: " << *variable1Memory << endl;
        cout << "Адреса в пам'яті: " << variable1Memory << endl;
      } else if (numTask == 2) {
        const int elems = 5;
        int arr[elems];
        int *arrMemory[elems];

        // заповнюємо масив
        for (size_t i = 0; i < elems; i++) {
          arr[i] = rand() % 100;
        }

        // виводимо массив
        cout << "Массив: ";
        for (size_t i = 0; i < elems - 1; i++) {
          cout << arr[i] << ", ";
        }
        cout << arr[elems - 1] << "." << endl;

        for (size_t i = 0; i < elems; i++) {
          arrMemory[i] = &arr[i];
        }

        cout << "Адреси в пам'яті: " << endl;
        for (size_t i = 0; i < elems; i++) {
          cout << arrMemory[i] << endl;
        }
      }
    }
  } while (numTask < 1 || numTask > 5);

  
}
