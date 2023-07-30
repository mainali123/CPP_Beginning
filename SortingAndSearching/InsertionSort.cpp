//
// Created by diwash on 30/07/2023.
//

#include <iostream>

using namespace std;

void insertionSort(int arr[], int sizeOfArray){
    for (int i = 1; i < sizeOfArray; ++i) {

        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous = previous - 1;
        }
        arr[previous + 1] = current;
    }
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, sizeOfArray);
    for (int i = 0; i < sizeOfArray; ++i) {
        cout<<arr[i] << ", ";
    }
    return 0;
}