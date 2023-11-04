#include <iostream>
using namespace std;

int main() {
  const int n = 7;
  string daysValue[n] = { "Monday", "Tuesday", "Wednesday", "Thurday", "Friday", "Saturday", "Sunday" };
  float temperature[n] = {};
  float maxTemperature = 0, minTemperature = 0;
  int maxTemperatureDay = 1, minTemperatureDay = 1, averageTemperature = 0, aboveTemperature = 0;

  for (int i = 0; i < n; i++) {
    do {
      cout << "Enter temprerature on " << daysValue[i] << ": ";
      cin >> temperature[i];

      if (temperature[i] > 50 || temperature[i] < -50) {
        cout << "Error, temperature cannot be less -50 & more 50" << endl;
      }
    } while (temperature[i] > 50 || temperature[i] < -50);
  }

  maxTemperature = temperature[0];
  for (int i = 1; i < n; i++) {
    if (temperature[i] > maxTemperature) {
      maxTemperature = temperature[i];
      maxTemperatureDay = i;
    }
  }

  minTemperature = temperature[0];
  for (int i = 1; i < n; i++) {
    if (temperature[i] < minTemperature) {
      minTemperature = temperature[i];
      minTemperatureDay = i;
    }
  }

  for (int i = 0; i < n; i++) {
    averageTemperature += temperature[i];
  }
  averageTemperature /= n;

  for (int i = 0; i < n; i++) {
    if (temperature[i] > averageTemperature) {
      aboveTemperature++;
    }
  }

  cout << "Day with the highest temperature: Day " << maxTemperatureDay+1 << ", temperature " << maxTemperature << endl;
  cout << "Day with the lowest temperature: Day " << minTemperatureDay+1 << ", temperature " << minTemperature << endl;
  cout << "Average temperature: " << averageTemperature << endl;
  cout << "Number of days with temperatures above average: " << aboveTemperature << endl;
}