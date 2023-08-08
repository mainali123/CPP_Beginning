//
// Created by diwash on 08/08/2023.
//
#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    int count = 0;
    // your code goes here
    for (int i = 0; i < length.size(); ++i) {
        for (int j = 0; j < length.size(); ++j) {
            if (length[j] - length[i] == D) {
                count++;
            }
        }
    }
    return count;

}

int main() {
    vector<int> arr = {1, 3, 3, 9, 4};
    cout<<pairSticks(arr, 2);
    return 0;
}