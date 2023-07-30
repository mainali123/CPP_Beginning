//
// Created by diwash on 28/07/2023.
//

#include <iostream>

using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    // Binary Search using recursion
    if (start <= end){
        int mid = (start + end) / 2;
        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] < target){
            return binarySearch(arr, mid + 1, end, target);
        } else {
            return binarySearch(arr, start, mid - 1, target);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << binarySearch(arr, 0, size - 1, target);
    return 0;
}