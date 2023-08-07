//
// Created by diwash on 07/08/2023.
//

#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    if (flag) {
        sort(a.begin(), a.end());
        return a;
    } else {
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        return a;
    }
}

int main() {
    vector<int> arr= {9, 8, 1, 2, 3};
    vector<int> answer = sortingWithComparator(arr, false);
    for(int i: answer) {
        cout<<i<<", ";
    }
    return 0;
}