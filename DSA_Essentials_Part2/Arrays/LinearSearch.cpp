//
// Created by diwash on 30/07/2023.
//

#include <iostream>

using namespace std;

int linearSearch(int arr[], int sizeOfArray, int target) {
    for (int i = 0; i < sizeOfArray; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int linearSearchUsingRecursion(int arr[], int sizeOfArray, int target, int count) {
    if (count < sizeOfArray) {
        if (arr[count] == target) {
            return count;
        } else {
            linearSearchUsingRecursion(arr, sizeOfArray, target, ++count);
        }
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the target that needed to be searched: ";
    int target;
    cin >> target;
    cout << linearSearch(arr, sizeOfArray, target);
    cout << linearSearchUsingRecursion(arr, sizeOfArray, target, 0);
    return 0;
}