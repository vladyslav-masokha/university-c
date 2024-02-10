#include <iostream>
using namespace std;

/* 
  ������ 1 "������"
������ ����� ������ � ����� �� ���� � ���.� ������� ����� ������ ������ ����� ���� �������� �� ���� ���������� �����������. �������� �����, ����������� ������, ��������� �� ����� 5% �� ��������� ���� �������. ���� ������ ������ �����, �� ���� ������� ���������� �� 0.05% �� ������� �������. ��������� �������� ������� ����������� ��������: �������� � ��������� �������� ���� �, �������� ������� ���� ������, ���� ������� �������� ������� ���� ��������� �������, ������ ����� �� ���������� ��������� (��������� ����� ������� ����������� ��� ��, �� ���� ����������, ���� ������ ��������� ����� 5% �� ��������� ���� �������). 
���������:
�� ������ ������ ������ ����� ��������� ������
����� �� ���� ���������� �������
����� �� ���� ������������� �������
*/

int main() {
  float x, monthPay, remainingAmount, minPay = 0, maxPay = 0;
  int months = 0, minMonth = 0, maxMonth = 0;
  bool decreased = false;

  do {
    cout << "Enter the total loan amount: ";
    cin >> x;

    if (x <= 0) cout << "Error! Credit cannot be zero or negative!" << endl;
  } while (x <= 0);

  remainingAmount = x;

  while (remainingAmount > 0) {
    cout << "Enter the amount of the monthly payment: " << endl;
    cin >> monthPay;

    while (monthPay < 0) {
      cout << "Error: Monthly payment cannot be negative. Please enter a valid amount." << endl;
      cout << "Enter the amount of the monthly payment: " << endl;
      cin >> monthPay;
    }

    if (monthPay < 0.05 * remainingAmount) {
      cout << "The repayment amount is less than 5%. The remaining loan amount will increase." << endl;
      decreased = true;
    }

    if (monthPay > remainingAmount) {
      cout << "Error! Monthly payment cannot exceed the remaining loan amount (" << remainingAmount << " $)." << endl;
      continue;
    }

    remainingAmount -= monthPay;

    if (months == 0 || monthPay < minPay) {
      minPay = monthPay;
      minMonth = months + 1;
    }

    if (monthPay > maxPay) {
      maxPay = monthPay;
      maxMonth = months + 1;
    }

    cout << "The remaining loan amount: " << remainingAmount << " $" << endl;

    months++;
  }

  cout << "Total: " << months << " months" << endl;
  cout << "Min: Month " << minMonth << ", Sum " << minPay << " $" << endl;
  cout << "Max: Month " << maxMonth << ", Sum " << maxPay << " $" << endl;

  if (decreased) cout << "The repayment amount was less than 5% of the loan balance." << endl;

  return 0;
}