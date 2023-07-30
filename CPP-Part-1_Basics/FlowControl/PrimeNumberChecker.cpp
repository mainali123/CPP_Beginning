//
// Created by diwash on 25/07/2023.
//

#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    bool prime = false;

    for (int i = 2; i < num; ++i) {
        if (num % i == 0){
            prime = true;
            break;
        }
    }
    if (!prime){
        cout<<"Prime number";
    } else {
        cout<<"Not a prime number";
    }

    return 0;
}