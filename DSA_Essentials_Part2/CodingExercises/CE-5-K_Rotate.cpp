/*
K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.
Input Format
In the function an integer vector and number k is passed.
Output Format
Return an integer vector.
Sample Input
{1, 3, 5, 7, 9}, x = 2
Sample Output
{7, 9, 1, 3, 5}

Explanation
After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}*/


#include<bits/stdc++.h>

using namespace std;

vector<int> kRotate(vector<int> a, int k) {
    // your code  goes here
    int size = a.size();
    int iteration = k % size;

    vector<int> ans;
    for (int i = size - iteration; i < size; ++i) {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < size - iteration; ++i) {
        ans.push_back(a[i]);
    }
    return ans;
}

vector<int> kRotateOptimized(vector<int> a, int k) {
    int size = a.size();
    int iteration = k % size;

    reverse(a.begin(), a.begin() + (size - iteration));
    reverse(a.begin() + (size - iteration), a.end());
    reverse(a.begin(), a.end());
    return a;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 2;
    for (int x: kRotate(arr, target)) {
        cout << x;
    }
    cout<<endl;
    for (int x: kRotateOptimized(arr, target)) {
        cout << x;
    }
    return 0;
}