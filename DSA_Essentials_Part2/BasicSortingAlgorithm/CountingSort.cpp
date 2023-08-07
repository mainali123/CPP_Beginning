//
// Created by diwash on 07/08/2023.
//

#include <iostream>
#include <vector>

using namespace std;

void sort(int arr[], int size) {
    int largets = -1;
    for (int i = 0; i < size; ++i) {
        largets = max(largets, arr[i]);
    }

    // Creating a count array/vector
    vector<int> freq(largets + 1, 0);

    // update the frequency array/vector
    for (int i = 0; i < size; ++i) {
        freq[arr[i]]++;
    }

    // put back the elements from frequency to original array
    int j = 0;
    for (int i = 0; i <= largets; ++i) {
        while (freq[i] > 0) {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
}

int main() {
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<", ";
    }
    return 0;
}