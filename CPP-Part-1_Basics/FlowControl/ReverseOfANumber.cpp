//
// Created by diwash on 25/07/2023.
//
#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int reversedNum = 0;

    while (num > 0){
        reversedNum *= 10;
        reversedNum += num % 10;
        num /= 10;
    }
    cout<<reversedNum;
    return 0;
}