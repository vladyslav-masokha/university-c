#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
  // sorting
  array<int, 9> arr = {1, 4, -3, 23, 53, 12, 65, 14, 9};

  // ���������� ������ �� ��������� ������ .sort()
  // �� ����������� �������� �� ����������
  sort(arr.begin(), arr.end());
  for (int el : arr) {
    cout << el << ", ";
  }

  return 0;
}
