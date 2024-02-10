#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

struct BookStore {
  string title;
  string author;
  double price;
  int amount;
};

void printInfo(const BookStore& book) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  cout << "\n����� �����: " << book.title << endl;
  cout << "�����: " << book.author << endl;
  cout << "ֳ��: " << book.price << endl;
  cout << "ʳ������ �� �����: " << book.amount << endl;
}

void printBooks(const vector<BookStore>& books) {
  for (const auto& book : books) {
    printInfo(book);
  }
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  vector<BookStore> books;
  const int amountBooks = 2;

  for (int i = 0; i < amountBooks; i++) {
    BookStore book;

    cout << "������ ����� �����: ";
    cin >> book.title;

    cout << "������ ������: ";
    cin >> book.author;

    cout << "������ ����: ";
    cin >> book.price;

    cout << "������ ������� �� �����: ";
    cin >> book.amount;

    books.push_back(book);
  }

  printBooks(books);

  return 0;
}
