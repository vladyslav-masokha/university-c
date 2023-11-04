#include <iostream>
using namespace std;

int main() {
    int goodsReserved, goodsOnStorage, goodsDeliver;
    cout << "Enter goods on storage: " << endl;
    cin >> goodsOnStorage;

    if (goodsOnStorage > 0) {
        cout << "Enter goods reserved: " << endl;
        cin >> goodsReserved;

        if (goodsOnStorage >= goodsReserved && goodsReserved >= 0) {
            cout << "Goods on storage: " << goodsOnStorage << endl;
            cout << "Goods reserved: " << goodsReserved << endl;

            if (goodsOnStorage == goodsReserved) {
                cout << "All reserved";
            }

            while (goodsOnStorage > goodsReserved) {
                cout << "Enter goods for deliver: " << endl;
                cin >> goodsDeliver;

                if ((goodsOnStorage - goodsDeliver) < goodsReserved) {
                    cout << "Error | Cannot deliver" << endl;
                } else if ((goodsOnStorage - goodsDeliver) > goodsReserved) {
                    goodsOnStorage -= goodsDeliver;
                } else {
                    cout << "Storage is closed" << endl;
                    break;
                }
            }
        } else {
            cout << "Cannot reserved";
        }
    } else {
        cout << "Error | Goods cannot be zero or negative";
    }

    return 0;
}
