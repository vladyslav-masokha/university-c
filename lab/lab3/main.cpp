#include <iostream>
using namespace std;

int main() {
//    int num;
//    string message;
//
//    cout << "Enter num: " << endl;
//    cin >> num;
//
//    message = num % 2 == 0 ? "The number is even" : "The number isn't even";
//    cout << message << endl;

    int numMonth;
    string season;

    cout << "Enter num month: " << endl;
    cin >> numMonth;

//    if (numMonth == 12 || (numMonth > 0 && numMonth <= 2)) {
//        season = "Winter";
//    } else if (numMonth > 2 && numMonth <= 5) {
//        season = "Spring";
//    } else if (numMonth > 5 && numMonth <= 8) {
//        season = "Summer";
//    } else if (numMonth > 8 && numMonth <= 11) {
//        season = "Autumn";
//    } else {
//        season = "Incorrect number month";
//    }

    season = (numMonth == 12 || (numMonth > 0 && numMonth <= 2)) ?
             "Winter" :
             numMonth > 2 && numMonth <= 5 ?
             "Spring" :
             numMonth > 5 && numMonth <= 8 ?
             "Summer" :
             numMonth > 8 && numMonth <= 11 ?
             "Autumn" :
             "Incorrect number month";

    cout << season;

    return 0;
}
