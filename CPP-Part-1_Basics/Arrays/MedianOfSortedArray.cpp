//
// Created by diwash on 27/07/2023.
//
/*
Median of sorted Array.
Implement a function that takes a sorted array as argument and returns the median of the sorted Array.
Sample Input
1 2 3 3 4 5
1 4 5 5 6 7 8 9
Sample Output
3
5
Explanation :
for test case one, 3 is the middle most element in the sequence.
Similarly for test case two, 5 is the middle most element.*/

#include <iostream>

using namespace std;


int calculateMedian(int A[], int sizeOfArray) {
    if (sizeOfArray % 2 != 0){
        return A[sizeOfArray / 2];
    } else {
        int mid1 = A[sizeOfArray / 2];
        int mid2 = A[(sizeOfArray / 2) - 1];
        return (mid1 + mid2) / 2;
    }
}

int main(){
    int arr[] = {1, 2, 3, 3, 4, 5};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    cout<<calculateMedian(arr, sizeOfArray);
    return 0;
}