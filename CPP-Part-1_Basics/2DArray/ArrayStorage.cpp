//
// Created by diwash on 30/07/2023.
//

#include <iostream>

using namespace std;

// Pass by reference
void print(int arr[][100], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

void wavePrint(int arr[][100], int row, int col) {
    for (int i = 0; i < col; ++i) {
        if (i % 2 == 0){
            for (int j = 0; j < row; ++j) {
                cout<<arr[j][i]<< " ";
            }
            cout<<endl;
        } else{
            for (int j = row - 1; j >= 0; --j) {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }
}

int main() {
    int arr[1000][100];
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr[i][j];
        }
    }
    wavePrint(arr, row, col);

    return 0;
}