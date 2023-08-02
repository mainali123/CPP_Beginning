/*
Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.
Input Format
In the function an integer vector and number x is passed.
Output Format
Return a pair of integers.
Sample Input
{10, 22, 28, 29, 30, 40}, x = 54
Sample Output
22 and 30*/

#include<bits/stdc++.h>

using namespace std;

pair<int, int> closestSum(vector<int> arr, int x) {
    // your code goes here
    int start = 0;
    int end = arr.size() - 1;
    pair<int, int> ans;
    int diff;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum < x) {
            int currentDiff = abs(arr[end] - arr[start]);
            if (diff > currentDiff) {
                ans.first = arr[start];
                ans.second = arr[end];
                start++;
            } else {
                end--;
            }
        } else {
            end--;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int target = 54;
    pair<int, int> ans = closestSum(arr, target);
    cout << ans.first << ", " << ans.second;
    return 0;
}