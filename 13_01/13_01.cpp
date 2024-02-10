#include <iostream>
using namespace std;

// Заповнити массив рандомними числами до 100
void randomNumbersInArr(int arr[], int sizeArr) {
  for (int i = 0; i < sizeArr; i++) {
    arr[i] = rand() % 100;
  }
}

// Порахувати середнє арифметичне в одновимірному масиві
float calcAverage(int arr[], int sizeArr) {
  float avg = 0.0;

  for (int i = 0; i < sizeArr; i++) {
    avg += arr[i];
  }

  return avg / sizeArr;
}

// Порахувати вираз
float calc(int arrA[], int sizeA, int arrB[], int sizeB, float x) {
  float avgA = calcAverage(arrA, sizeA);
  float avgB = calcAverage(arrB, sizeB);

  cout << "avg(A): " << avgA << endl;
  cout << "avg(B): " << avgB << endl;

  if (x > 0) {
    return avgA + avgB;
  } else if (x < 0) {
    return avgA - avgB;
  } else if (x == 0) {
    return avgA / avgB;
  }

  return avgA, avgB;
}

int main() {
  int sizeA, sizeB;
  float x = 0.0;

  do {
    cout << "Enter sizeA of array: ";
    cin >> sizeA;

    if (sizeA < 2) cout << "Error! Size cannot be zero or negative." << endl;
  } while (sizeA < 2);

  do {
    cout << "Enter sizeB of array: ";
    cin >> sizeB;

    if (sizeB < 2) cout << "Error! Size cannot be zero or negative." << endl;
  } while (sizeB < 2);

  int* arrA = new int[sizeA];
  int* arrB = new int[sizeB];

  randomNumbersInArr(arrA, sizeA);
  randomNumbersInArr(arrB, sizeB);

  do {
    cout << "Enter x: ";
    cin >> x;

    if (x <= 0.0) cout << "Error! X cannot be zero or negative." << endl;
  } while (x <= 0.0);

  cout << "Result: " << calc(arrA, sizeA, arrB, sizeB, x) << endl;

  return 0;
}
