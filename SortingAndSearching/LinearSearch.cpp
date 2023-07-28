//
// Created by diwash on 28/07/2023.
//
#include <iostream>

using namespace std;

int linearSearch(int arr[], int sizeOfArray, int target){
    // Using recursion on linear search
    static int index = 0;
    if(arr[index] == target && index < sizeOfArray) {
        return index;
    } else {
        if (index < sizeOfArray){
            ++index;
            linearSearch(arr, sizeOfArray, target);
        } else {
            return -1;
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    cout<<linearSearch(arr, size, target);
    return 0;
}

