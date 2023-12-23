#include <iostream>
#include <windows.h>

// Розмір зображення || матриці
#define N 4
#define M 5

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int** r = new int* [N];
  int** g = new int* [N];
  int** b = new int* [N];
  int** gray = new int* [N];

  for (size_t i = 0; i < N; i++) {
    r[i] = new int[M];
    g[i] = new int[M];
    b[i] = new int[M];
    gray[i] = new int[M];
  }

  // Заповнення матриць випадковими значеннями
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      r[i][j] = rand() % 256;
      g[i][j] = rand() % 256;
      b[i][j] = rand() % 256;
    }
  }

  // виведення матриці r
  cout << "матриця r: " << endl;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      cout << r[i][j] << " ";
    }

    cout << endl;
  }

  // виведення матриці g
  cout << "\nматриця g: " << endl;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      cout << g[i][j] << " ";
    }

    cout << endl;
  }

  // виведення матриці b
  cout << "\nматриця b: " << endl;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      cout << b[i][j] << " ";
    }

    cout << endl;
  }

  // Перетворення зображення у відтінки сірого
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      int Y = 0.2126 * r[i][j] + 0.7152 * g[i][j] + 0.0722 * b[i][j];
      gray[i][j] = Y;
    }
  }

  // виведення матриці gray
  cout << "\nматриця gray: " << endl;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      cout << gray[i][j] << " ";
    }

    cout << endl;
  }

  // Очищення пам'яті
  for (int i = 0; i < N; i++) {
    delete[] r[i];
    delete[] g[i];
    delete[] b[i];
    delete[] gray[i];
  }

  delete[] r;
  delete[] g;
  delete[] b;
  delete[] gray;

  return 0;
}