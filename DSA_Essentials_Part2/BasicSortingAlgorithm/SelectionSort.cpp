//
// Created by diwash on 07/08/2023.
//

#include <iostream>

using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int min = arr[i];
        int min_index = i;
        for (int j = i; j < size; ++j) {
            if (arr[j] < min) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
    }
}