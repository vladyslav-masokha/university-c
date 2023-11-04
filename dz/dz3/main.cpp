#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x1, x2, y1, y2, z1, z2, a, b, c, p, area;

    cout <<"Enter coordinates x1:\n";
    cin >> x1;

    cout <<"Enter coordinates x2:\n";
    cin >> x2;

    cout <<"Enter coordinates y1:\n";
    cin >> y1;

    cout <<"Enter coordinates y2:\n";
    cin >> y2;

    cout <<"Enter coordinates z1:\n";
    cin >> z1;

    cout <<"Enter coordinates z2:\n";
    cin >> z2;

    a = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    b = sqrt(pow((y2 - y1),2) + pow((z2 - z1),2));
    c = sqrt(pow((x2 - x1),2) + pow((z2 - z1),2));

    if (a > 0 && b > 0 && c > 0) {
        p = (a + b + c) / 2;
        cout <<"p = " << p << endl;

        area = sqrt(p * (p-a) * (p - b) * (p - c));
        cout <<"area: " << area;
    } else {
        cout << "Side cannot be negative";
    }

    return 0;
}