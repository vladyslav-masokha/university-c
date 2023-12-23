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

    cout << "������ ��'�: ";
    cin >> animal.name;

    cout << "������ ���: ";
    cin >> animal.species;

    cout << "������ ��: ";
    cin >> animal.age;

    cout << "������ ���� ������'�: ";
    cin >> animal.health;

    animals.push_back(animal);
  }
}

void outputAnimals(vector<Animal>& animals) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  for (const auto& animal : animals) {
    cout << "��'�: " << animal.name << endl;
    cout << "���: " << animal.species << endl;
    cout << "³�: " << animal.age << endl;
    cout << "������'�: " << animal.health << endl;
    cout << endl;
  }
}

bool hasStickAnimal(const vector<Animal>& animals) {
  for (auto& animal : animals) {
    if (animal.health == "�����") {
      return 1;
    } else if (animal.health == "�������") {
      return 0;
    }
  }
}

void cureAnimal(vector<Animal>& animals) {
  for (auto& animal : animals) {
    if (animal.health == "�����") {
      animal.health = "�������";
    };
  }

  cout << "�� ������� ��������!" << endl;
}

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  vector<Animal> animals;
  int numAnimals;

  do {
    cout << "������ ������� ������: ";
    cin >> numAnimals;

    if (numAnimals < 0 || numAnimals > 11) cout << "���������� �������!" << endl;
  } while (numAnimals < 0 || numAnimals > 11);

  inputAnimals(animals, numAnimals);

  while (true) {
    cout << "1. ������� ���������� ��� ������\n2. ��������� ��� ������ ������\n3. �����\n";
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
      outputAnimals(animals);
      if (hasStickAnimal(animals)) cout << "�������� �������� �� ��������!" << endl;
      else cout << "�������� ��������!" << endl;
      break;
    case 2:
      cureAnimal(animals);
      if (hasStickAnimal(animals)) cout << "�������� �������� �� ��������!" << endl;
      else cout << "�������� ��������!" << endl;
      break;
    case 3:
      return 0;
    default:
      cout << "������������ ����\n";
      break;
    }
  }
}

