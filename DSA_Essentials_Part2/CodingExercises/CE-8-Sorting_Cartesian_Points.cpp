//
// Created by diwash on 08/08/2023.
//
#include<bits/stdc++.h>

using namespace std;


vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v) {
    sort(v.begin(), v.end());
    return v;
}

int main() {
    vector<pair<int, int>> arr = {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}};
    vector<pair<int, int>> ans = sortCartesian(arr);
    for(auto i: ans) {
        cout<<"("<<i.first<<", "<<i.second<<")";
    }
    return 0;
}