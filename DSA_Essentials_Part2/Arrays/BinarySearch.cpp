//
// Created by diwash on 30/07/2023.
//

#include <iostream>

using namespace std;

int binarySearch(int arr[], int sizeOfArray, int target) {
    int start = 0;
    int end = sizeOfArray;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int binarySearchUsingRecursion(int arr[], int sizeOfArray, int target, int start, int end) {
    if (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return binarySearchUsingRecursion(arr, sizeOfArray, target, mid + 1, end);
        } else {
            return binarySearchUsingRecursion(arr, sizeOfArray, target, start, mid - 1);
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
    cout << binarySearch(arr, sizeOfArray, target);
    cout<<binarySearchUsingRecursion(arr, sizeOfArray, target, 0, sizeOfArray);
    return 0;
}