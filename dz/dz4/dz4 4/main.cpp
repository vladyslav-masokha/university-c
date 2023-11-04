#include <iostream>
using namespace std;

int main() {
    float personGrowth;
    string message;

    cout << "Enter growth (cm): \n";
    cin >> personGrowth;

//    message = personGrowth >= 180 ?
//            "Tall" :
//            personGrowth >= 40 ?
//            "Low" :
//            "It isn't growth";

    if (personGrowth >= 180) {
        message = "Tall";
    } else if (personGrowth >= 40) {
        message = "Low";
    } else {
        message = "It isn't growth";
    }

    cout << message << endl;
    return 0;
}