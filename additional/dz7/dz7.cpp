#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int n;

  do {
    cout << "Введіть кількість елементів для масиву: ";
    cin >> n;

    if (n < 2) {
      cout << "Помилка! Введіть кількість знову.." << endl;
    } else {
      float* arr = new float[n];
      int index = 0;
      float min, sum = 0;

      for (size_t i = 0; i < n; i++) {
        cout << "Введіть дійсне число: ";
        cin >> arr[i];
      }

      min = arr[0];
      for (size_t i = 0; i < n; i++) {
        if (min >= arr[i]) {
          min = arr[i];
          index = i;
          break;
        }
      }

      if (min >= 0) {
        cout << "Помилка! Для розрахунку суми, число повинне бути від'ємне.." << endl;
      } else
        for (size_t i = index + 1; i < n; i++) {
          if (i == n) {
            cout << "Не можна порахувати суму елементів!" << endl;
          } else {
            sum += arr[i];
          }
        }

      for (size_t i = 0; i < n; i++) {
        cout << arr[i] << " ";
      }

      cout << "\nПерше найменше число: " << min << endl;
      cout << "Сума: " << sum << endl;

      delete[] arr;
    }
  } while (n < 1);
}
