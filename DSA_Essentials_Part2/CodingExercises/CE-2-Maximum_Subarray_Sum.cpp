/*
Maximum Subarray Sum
Implement a function that takes an array as input and returns the maximum subarray sum.
Sample Input
1 -2 3 4 4 -2
5 0 -1 0 1 2 -1
Sample Output
11
7
Explanation : for test case one, A[2..4] is [3, 4, 4] and It has max sum 3 + 4 + 4 = 11,
Similarly for test case two, answer should be 7.
Note: Minimum size of the subarray should be 1.*/

#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {

    // If all the numbers are negative
    bool allNegative = true;
    int largest = INT_MIN;

    for(int x: A) {
        if (x > 0){
            allNegative = false;
        }
        largest = max(largest, x);
    }

    if (allNegative) {
        return largest;
    }


    int currentValue= 0;
    int maxValue = 0;
    for (int i = 0; i < A.size(); ++i) {
        if(currentValue + A[i] < 0) {
            currentValue = 0;
        } else {
            currentValue += A[i];
        }
        maxValue = max(maxValue, currentValue);
    }
    return maxValue;
}

int main() {
    vector<int> A = {5, 0, -1, 0, 1, 2, -1};
    cout<<maxSumSubarray(A);
    return 0;
}