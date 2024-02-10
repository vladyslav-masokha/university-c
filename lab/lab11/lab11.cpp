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

  cout << "\nНазва книги: " << book.title << endl;
  cout << "Автор: " << book.author << endl;
  cout << "Ціна: " << book.price << endl;
  cout << "Кількість на складі: " << book.amount << endl;
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

    cout << "Введіть назву книги: ";
    cin >> book.title;

    cout << "Введіть автора: ";
    cin >> book.author;

    cout << "Введіть ціну: ";
    cin >> book.price;

    cout << "Введіть кількість на складі: ";
    cin >> book.amount;

    books.push_back(book);
  }

  printBooks(books);

  return 0;
}
