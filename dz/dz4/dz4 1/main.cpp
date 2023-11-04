#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter num: \n";
    cin >> num;

    num > 0 ? num += 20 : num -=- 5;
    cout << "Result: " << num << endl;
    return 0;
}
