#include <iostream>
#include "cmath"

using namespace std;

int main() {
    double p, r, pr1, pr2, pr3;

    cout << "Enter p: " << endl;
    cin >> p;

    pr1 = 2 / 3 * pow(p, 2);
    pr2 = (p + 2 + sqrt(1 / p)) / 3;
    pr3 = (12 * p) / 5;

    r = abs(pr1 + pr2 - pr3);
//    cout << "R => " << r << endl;
    cout << "pz1 => " << pr1 << endl;
    return 0;
}
