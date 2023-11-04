#include <iostream>
using namespace std;

int main() {
    int mi = 0;
    
    cout << "Enter mi: ";
    cin >> mi;

    cout << "Converted to km/h speed: " << mi * 1.609344 << endl;
}