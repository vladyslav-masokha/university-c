#include <iostream>
using namespace std;

struct Car {
  int color;
  string brand;
  int carType;
  int year;
  float price;
};

void inputCar(Car& car) {
  do {
    cout << "Color (1-20): ";
    cin >> car.color;

    if (car.color < 1 || car.color > 20) cout << "\nError! Color (1-20)." << endl;
  } while (car.color < 1 || car.color > 20);

  cout << "Brand: ";
  cin >> car.brand;

  do {
    cout << "Type (1-3): ";
    cin >> car.carType;

    if (car.carType < 1 || car.carType > 3) cout << "\nError! Type (1-3)." << endl;
  } while (car.carType < 1 || car.carType > 3);

  do {
    cout << "Year should be greater than 2000 & less 2024: ";
    cin >> car.year;

    if (car.year <= 2000 || car.year > 2024) cout << "\nError! Year should be greater than 2000 & less 2024." << endl;
  } while (car.year <= 2000 || car.year > 2024);

  do {
    cout << "Price: ";
    cin >> car.price;

    if (car.price <= 0) cout << "\nError! Price cannot be zero or negative." << endl;
  } while (car.price <= 0);
}

void outputCatalog(const Car catalog[], int N) {
  for (int i = 0; i < N; i++) {
    cout << "Car " << i + 1 << ": " << endl;
    cout << "Color: " << catalog[i].color << endl;
    cout << "Brand: " << catalog[i].brand << endl;
    cout << "Type: " << catalog[i].carType << endl;
    cout << "Year: " << catalog[i].year << endl;
    cout << "Price: " << catalog[i].price << endl;
    cout << endl;
  }
}

void outputCarsWithColor(const Car catalog[], int N, int colorCar) {
  bool carFound = false;
  cout << "\nCars with color " << colorCar << ": " << endl;

  for (int i = 0; i < N; i++) {
    if (catalog[i].color == colorCar) {
      carFound = true;
      cout << "Car " << i + 1 << ": " << endl;
      cout << "Color: " << catalog[i].color << endl;
      cout << "Brand: " << catalog[i].brand << endl;
      cout << "Type: " << catalog[i].carType << endl;
      cout << "Year: " << catalog[i].year << endl;
      cout << "Price: " << catalog[i].price << endl;
    }

    if (!carFound) {
      cout << "Cars with color " << colorCar << " is not defined!" << endl;
    }
  }
}

int countBmw(const Car catalog[], int N, string bmwBrand) {
  int count = 0;

  for (int i = 0; i < N; i++) {
    if (catalog[i].brand == bmwBrand) count++;
  }

  return count;
}

float avgCarAge(const Car catalog[], int N) {
  float avgCarAge = 0;

  for (int i = 0; i < N; i++) avgCarAge += (2024 - catalog[i].year);

  return avgCarAge /= N;
}

void outputCarMaxPrice(const Car catalog[], int N) {
  float maxPrice = 0;
  int maxPriceIndex = N;

  for (int i = 0; i < N; i++) {
    if (catalog[i].price > maxPrice) {
      maxPrice = catalog[i].price;
      maxPriceIndex = i;
    }
  }

  if (maxPriceIndex != N) {
    cout << "\nCar with max price:" << endl;
    cout << "Car " << maxPriceIndex + 1 << ": " << endl;
    cout << "Color: " << catalog[maxPriceIndex].color << endl;
    cout << "Brand: " << catalog[maxPriceIndex].brand << endl;
    cout << "Type: " << catalog[maxPriceIndex].carType << endl;
    cout << "Year: " << catalog[maxPriceIndex].year << endl;
    cout << "Price: " << catalog[maxPriceIndex].price << endl;
  }
}

int main() {
  int N, colorCar = 3;
  string bmwBrand = "bmw";

  do {
    cout << "Enter amount cars: ";
    cin >> N;

    if (N <= 0) cout << "\nError! Cars cannot be zero or negative." << endl;
  } while (N <= 0);

  Car* catalog = new Car[N];

  for (int i = 0; i < N; i++) {
    cout << "\nEnter details about car " << i + 1 << ": " << endl;
    inputCar(catalog[i]);
  }

  cout << "\nCatalog:" << endl;
  cout << "--------------------" << endl;
  outputCatalog(catalog, N);
  cout << "--------------------" << endl;

  outputCarsWithColor(catalog, N, colorCar);

  cout << "\nNumber of bmw cars: " << countBmw(catalog, N, bmwBrand) << endl;
  cout << "Average age of cars: " << avgCarAge(catalog, N) << " years" << endl;

  outputCarMaxPrice(catalog, N);

  delete[] catalog;
}