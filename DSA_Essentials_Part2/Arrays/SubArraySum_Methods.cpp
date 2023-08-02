//
// Created by diwash on 30/07/2023.
//

#include <iostream>

using namespace std;

// Bruteforce method with time complexity O(N^3)
int printSubArray1(int arr[], int sizeOfArray) {
    int largestSum = 0;
    for (int i = 0; i < sizeOfArray; ++i) {
        for (int j = i; j < sizeOfArray; ++j) {
            int subArraySum = 0;
            for (int k = i; k < j; ++k) {
                subArraySum += arr[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

// Prefix sum method with time complexity O(N^2)
int printSubArray2(int arr[], int sizeOfArray) {
    int prefix[sizeOfArray];
    prefix[0] = arr[0];

    for (int i = 1; i < sizeOfArray; ++i) {
        prefix[i] = arr[i] + prefix[i - 1];
    }
    int largestSum = 0;
    for (int i = 0; i < sizeOfArray; ++i) {
        for (int j = i; j < sizeOfArray; ++j) {
            int subArraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    cout << printSubArray1(arr, sizeOfArray) << endl;
    cout << printSubArray2(arr, sizeOfArray) << endl;
    return 0;
}