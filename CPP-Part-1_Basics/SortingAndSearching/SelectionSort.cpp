//
// Created by diwash on 28/07/2023.
//

#include <iostream>

using namespace std;

void selectionSort(int arr[], int sizeOfArray){

    for (int i = 0; i < sizeOfArray - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < sizeOfArray; ++j) {
            if (arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main(){
    int arr[]{5, 4, 3, 2, 1};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, sizeOfArray);
    for (int i = 0; i < sizeOfArray; ++i) {
        cout<<arr[i];
    }
    return 0;
}