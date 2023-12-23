#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

struct Animal {
  string name, species, health;
  int age;
};

void inputAnimals(vector<Animal>& animals, int numAnimals) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (int i = 0; i < numAnimals; i++) {
    Animal animal;

    cout << "Введіть ім'я: ";
    cin >> animal.name;

    cout << "Введіть вид: ";
    cin >> animal.species;

    cout << "Введіть вік: ";
    cin >> animal.age;

    cout << "Введіть стан здоров'я: ";
    cin >> animal.health;

    animals.push_back(animal);
  }
}

void outputAnimals(vector<Animal>& animals) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (const auto& animal : animals) {
    cout << "Ім'я: " << animal.name << endl;
    cout << "Вид: " << animal.species << endl;
    cout << "Вік: " << animal.age << endl;
    cout << "Здоров'я: " << animal.health << endl;
    cout << endl;
  }
}

bool hasStickAnimal(const vector<Animal>& animals) {
  for (auto& animal : animals) {
    if (animal.health == "хвора") {
      return 1;
    } else if (animal.health == "здорова") {
      return 0;
    }
  }
}

void cureAnimal(vector<Animal>& animals) {
  for (auto& animal : animals) {
    if (animal.health == "хвора") {
      animal.health = "здорова";
    };
  }

  cout << "Всі тварини вилікувані!" << endl;
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  vector<Animal> animals;
  int numAnimals;

  do {
    cout << "Введіть кількість тварин: ";
    cin >> numAnimals;

    if (numAnimals < 0 || numAnimals > 11) cout << "Некоректна кількість!" << endl;
  } while (numAnimals < 0 || numAnimals > 11);

  inputAnimals(animals, numAnimals);

  while (true) {
    cout << "1. Вивести інформацію про тварин\n2. Вилікувати всіх хворих тварин\n3. Вихід\n";
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
      outputAnimals(animals);
      if (hasStickAnimal(animals)) cout << "Притулок закритий на карантин!" << endl;
      else cout << "Притулок відкритий!" << endl;
      break;
    case 2:
      cureAnimal(animals);
      if (hasStickAnimal(animals)) cout << "Притулок закритий на карантин!" << endl;
      else cout << "Притулок відкритий!" << endl;
      break;
    case 3:
      return 0;
    default:
      cout << "Неправильний вибір\n";
      break;
    }
  }
}

