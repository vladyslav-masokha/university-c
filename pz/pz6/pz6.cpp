#include <iostream>
using namespace std;

int main() {
  int amountCake, minutes, standardWeight, deviation, weightCake;
  int totalMinutes = 0;
  int defectiveCakes = 0;
  int totalGoodWeight = 0;

  do {
    cout << "Enter the number of cakes: ";
    cin >> amountCake;

    if (amountCake > 0) {
      do {
        cout << "Enter the number of minutes to make the cake: ";
        cin >> minutes;

        if (minutes > 0) {
          totalMinutes += minutes;

          do {
            cout << "Enter standard weight: ";
            cin >> standardWeight;

            if (standardWeight >= 500 && standardWeight <= 5500) {
              do {
                cout << "Enter the maximum permissible deviation: ";
                cin >> deviation;

                if (deviation >= 0 || deviation > (standardWeight * 0.005)) {
                  do {
                    cout << "Enter weight cake: ";
                    cin >> weightCake;

                    if (weightCake > 0) {
                      totalGoodWeight += weightCake;

                      if (abs(weightCake - standardWeight) > deviation) {
                        defectiveCakes++;
                      }

                      cout << "Weight cake: " << weightCake << endl;
                    } else {
                      cout << "Error | Weight cake cannot be zero or negative!\n" << endl;
                    }
                  } while (weightCake < 1);
                } else {
                  cout << "Error | The maximum permissible deviation cannot be!\n" << endl;
                }
              } while (deviation < 0 || deviation < standardWeight * 0.005);
            } else {
              cout << "Error | Standard weight cannot be less than 500 and greater than 5500!\n" << endl;
            }
          } while (standardWeight < 500 || standardWeight > 5500);
        } else {
          cout << "Error | Minutes cannot be zero or negative!\n" << endl;
        }
      } while (minutes < 1);
    } else {
      cout << "Enter the number of cakes: ";
      cin >> amountCake;

      if (amountCake > 0) {
        do {
          cout << "Enter the number of minutes to make the cake: ";
          cin >> minutes;

          if (minutes > 0) {
            totalMinutes += minutes;

            do {
              cout << "Enter standard weight: ";
              cin >> standardWeight;

              if (standardWeight >= 500 && standardWeight <= 5500) {
                do {
                  cout << "Enter the maximum permissible deviation: ";
                  cin >> deviation;

                  if (deviation >= 0 || deviation > (standardWeight * 0.005)) {
                    do {
                      cout << "Enter weight cake: ";
                      cin >> weightCake;

                      if (weightCake > 0) {
                        totalGoodWeight += weightCake;

                        if (abs(weightCake - standardWeight) > deviation) {
                          defectiveCakes++;
                        }

                        cout << "Weight cake: " << weightCake << endl;
                      } else {
                        cout << "Error | Weight cake cannot be zero or negative!\n" << endl;
                      }
                    } while (weightCake < 1);
                  } else {
                    cout << "Error | The maximum permissible deviation cannot be!\n" << endl;
                  }
                } while (deviation < 0 || deviation < standardWeight * 0.005);
              } else {
                cout << "Error | Standard weight cannot be less than 500 and greater than 5500!\n" << endl;
              }
            } while (standardWeight < 500 || standardWeight > 5500);
          } else {
            cout << "Error | Minutes cannot be zero or negative!\n" << endl;
          }
        } while (minutes < 1);
      } else {
        cout << "Error | The number of cakes cannot be zero or negative!\n" << endl;
      }
    }
  } while (amountCake < 1);

  int hours = totalMinutes / 60;
  int remainingMinutes = totalMinutes % 60;
  cout << "Total cycle time: " << hours << " hours " << remainingMinutes << " minutes" << endl;

  int totalGoodCakes = amountCake - defectiveCakes;
  double averageGoodWeight = totalGoodWeight / totalGoodCakes;

  cout << "Total defective cakes: " << defectiveCakes << endl;
  cout << "Average weight of non-defective cakes: " << averageGoodWeight << endl;

  if (defectiveCakes > amountCake / 2) {
    cout << "More defects occurred in the second half of the cycle." << endl;
  } else {
    cout << "More defects occurred in the first half of the cycle." << endl;
  }

  return 0;
}
