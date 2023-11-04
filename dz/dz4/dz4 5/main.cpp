#include <iostream>
using namespace std;

int main() {
    float temp;
    const float lie = 37.5, healthy = 36.6;
    string message;

    cout << "Enter your temperature: \n";
    cin >> temp;

    message = temp >= lie || temp < healthy && temp >= 30 ?
            "Person is lie" :
            temp >= healthy ?
            "Person is healthy" :
            "The temperature cannot be lower than 30";

//    if (temp >= lie || (temp < healthy && temp >=30)) {
//        message = "Person is lie";
//    } else if (temp >= healthy) {
//        message = "Person is healthy";
//    } else {
//        message = "The temperature cannot be lower than 30";
//    }


    cout << message << endl;
    cout << 20 % 15;
    return 0;
}