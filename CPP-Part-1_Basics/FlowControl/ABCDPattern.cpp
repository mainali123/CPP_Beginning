//
// Created by diwash on 25/07/2023.
//
#include <iostream>

using namespace std;

int main() {
    int num;
    cin>>num;
    int ascii = 65;
    for (int j = 1; j <= num; j++) {
        // Ascending
        for (int i = 0; i < num-j+1; ++i) {
            cout << (char) ascii;
            ascii++;
        }
        ascii--;
        // Descending
        for (int i = 0; i < num-j+1; ++i) {
            cout << (char) ascii;
            ascii--;
        }
        cout<<endl;
        ascii++;
    }

    return 0;
}