//
// Created by diwash on 02/08/2023.
//

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 1; j < size - i; ++j) {
            if(arr[j - 1] > arr[j]) {
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

int main() {
    int arr[] = {10, 12, 5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int x: arr) {
        cout << x << ", ";
    }
    return 0;
}