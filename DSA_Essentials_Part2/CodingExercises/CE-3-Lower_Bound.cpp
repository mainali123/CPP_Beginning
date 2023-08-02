/*
Lower Bound
Given an array of integers A (sorted) and a integer Val.
Implement a function that takes A and Val as input parameters and returns the lower bound of Val.
Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.
Otherwise Val itself is the answer.
If Val is less than smallest element of array A then return '-1' in that case.
Example 1  :
A = [-1, -1, 2, 3, 5]
Val = 4
Answer :  3
Since 3 is just smaller than 4 in the array.
Example 2  :
A = [1, 2, 3, 4, 6]
Val = 4
Answer :  4
Since 4 is equal to 4.*/

#include<bits/stdc++.h>

using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    if (A[1] > Val) {
        return -1;
    }
    int answer;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == Val) {
            answer = Val;
            break;
        } else if (A[i] < Val && A[i + 1] > Val) {
            answer = A[i];
            break;
        }
    }
    return answer;
}

int lowerBoundBinarySearch(vector<int> A, int Val) {
    int start = 0;
    int end = A.size() - 1;
    int answer = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (A[mid] == Val) {
            return Val;
        } else if (A[mid] < Val) {
            answer = A[mid];
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return answer;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 6};
    int target = 9;
    cout << lowerBound(A, target) << endl;
    cout << lowerBoundBinarySearch(A, target) << endl;
    return 0;
}