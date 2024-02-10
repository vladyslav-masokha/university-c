#include <iostream>
using namespace std;

#define N 4
#define M 5

int main() {
  int** r = new int* [N];
  int** g = new int* [N];
  int** b = new int* [N];
  int** gray = new int* [N];

  for (int i = 0; i < N; i++) {
    r[i] = new int[M];
    g[i] = new int[M];
    b[i] = new int[M];
    gray[i] = new int[M];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      r[i][j] = rand() % 256;
      g[i][j] = rand() % 256;
      b[i][j] = rand() % 256;
    }
  }

  cout << "Matrix r: " << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << r[i][j] << " ";
    }

    cout << endl;
  }

  cout << "\nMatrix g: " << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << g[i][j] << " ";
    }

    cout << endl;
  }

  cout << "\nMatrix b: " << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << b[i][j] << " ";
    }

    cout << endl;
  }

  // Перетворення зображення у відтінки сірого
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int Y = 0.2126 * r[i][j] + 0.7152 * g[i][j] + 0.0722 * b[i][j];
      gray[i][j] = Y;
    }
  }

  cout << "\nMatrix gray: " << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << gray[i][j] << " ";
    }

    cout << endl;
  }

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