//
// Created by diwash on 31/07/2023.
//

#include <iostream>

using namespace std;

void printSubArray(int arr[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; ++i) {
        for (int j = i; j < sizeOfArray; ++j) {
            for (int k = i; k < j; ++k) {
                cout << arr[k] << ", ";
            }
            cout<<endl;
        }
    }
}

int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    printSubArray(arr, sizeOfArray);
    return 0;
}