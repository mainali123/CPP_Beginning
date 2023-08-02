/*
Optimized Bubble Sort
In simple bubble sort algorithm, the time complexity will remain O(n^2) every time, even if the given array is already sorted.
Your task is to optimized the bubble sort such that its best case time complexity becomes O(n).
Input Format
In the function an integer vector is passed.
Output Format
Return an integer vector in non decreasing order.
Sample Input
{1, 3, 5, 7, 9}
Sample Output
{1, 3, 5, 7, 9}}
Explanation
given vector is already sorted*/

#include<bits/stdc++.h>

using namespace std;

vector<int> optimizedBubbleSort(vector<int> v) {
    // your code  goes here
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 1; j < v.size() - i; ++j) {
            if (v[j - 1] > v[j]) {
                swap(v[j - 1], v[j]);
            }
        }
    }
    return v;
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> ans = optimizedBubbleSort(arr);
    for (int x: ans) {
        cout << x << ", ";
    }
    return 0;
}