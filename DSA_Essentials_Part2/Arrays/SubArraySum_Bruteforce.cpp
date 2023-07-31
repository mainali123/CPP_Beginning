//
// Created by diwash on 30/07/2023.
//

#include <iostream>

using namespace std;

// Bruteforce method with time complexity O(N^3)

int printSubArray(int arr[], int sizeOfArray) {
    int largestSum = 0;
    for (int i = 0; i < sizeOfArray; ++i) {
        for (int j = i; j < sizeOfArray; ++j) {
            int subArraySum = 0;
            for (int k = i; k < j; ++k) {
                subArraySum += arr[k];
            }
            if (largestSum < subArraySum) {
                largestSum = subArraySum;
                subArraySum = 0;
            } else {
                subArraySum = 0;
            }
        }
    }
    return largestSum;
}

int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    cout << printSubArray(arr, sizeOfArray);
    return 0;
}