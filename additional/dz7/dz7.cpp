#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int n;

  do {
    cout << "������ ������� �������� ��� ������: ";
    cin >> n;

    if (n < 2) {
      cout << "�������! ������ ������� �����.." << endl;
    } else {
      float* arr = new float[n];
      int index = 0;
      float min, sum = 0;

      for (size_t i = 0; i < n; i++) {
        cout << "������ ����� �����: ";
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
        cout << "�������! ��� ���������� ����, ����� ������� ���� ��'����.." << endl;
      } else
        for (size_t i = index + 1; i < n; i++) {
          if (i == n) {
            cout << "�� ����� ���������� ���� ��������!" << endl;
          } else {
            sum += arr[i];
          }
        }

      for (size_t i = 0; i < n; i++) {
        cout << arr[i] << " ";
      }

      cout << "\n����� �������� �����: " << min << endl;
      cout << "����: " << sum << endl;

      delete[] arr;
    }
  } while (n < 1);
}
