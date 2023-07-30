//
// Created by diwash on 24/07/2023.
//

#include <iostream>

using namespace std;

int main() {
    int unit;
    cout << "Enter the unit: " << endl;
    cin >> unit;

    if (1 <= unit && unit< 100) {
        cout << "Free electricity";
    } else if (100 <= unit && unit < 200) {
        cout << "Rs.5/unit";
    } else if (200 <= unit && unit < 300) {
        cout << "Rs.10/unit";
    } else {
        cout << "Rs.12/unit";
    }
    return 0;
}