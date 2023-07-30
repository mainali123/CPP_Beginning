//
// Created by diwash on 22/07/2023.
//
#include <iostream>

using namespace std;

int main() {

    cout<<"Enter the marks for Physics, Chemistry and Maths."<<endl;
    int physics, chemistry, maths;
    cin >> physics;
    cin >> chemistry;
    cin >> maths;

    float average = (physics + chemistry + maths) / 3.0f;

    cout << "The average marks is " << average;
    return 0;
}