//
// Created by diwash on 02/08/2023.
//

#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current) {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}

int main() {
    int arr[] = {10, 12, 5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for (int x: arr) {
        cout << x << ", ";
    }
    return 0;
}