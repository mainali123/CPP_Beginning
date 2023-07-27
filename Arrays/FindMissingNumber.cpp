//
// Created by diwash on 27/07/2023.
//


/*
find Missing number.
Given an array A of size (n-1) with all integers from 1 to n except one missing number.
Implement a function that takes A as an argument and returns the missing number.
Sample Input
3 4 2
6 3 2 5 1

Sample Output
1
4
Explanation :
for test case one, n = 4 and 1 is missing.
Similarly for test case two, n = 6 and 4 is missing.*/


#include <iostream>
#include <algorithm>

using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    if (sizeOfArray == 0){
        return 1;
    }
    sort(A, A + sizeOfArray);
    for (int i = 0; i <sizeOfArray - 1; ++i) {
        if(A[i] != A[i + 1] - 1){
            return A[i] + 1;
        }
    }
    return A[0] - 1;
}

int main() {
    int arr[] = {6, 3, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMissingNumber(arr, n);
    return 0;
}