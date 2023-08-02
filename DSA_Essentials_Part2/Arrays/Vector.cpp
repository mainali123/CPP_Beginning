//
// Created by diwash on 02/08/2023.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1;
    cout << vector1.size() << endl; // Size of vector

    // Capacity of the vector i.e actual memory allocated to the vector
    cout << vector1.capacity() << endl;

    // push_back (inserts element in the array)    TC: O(1)
    vector1.push_back(15);

    // print all the elements of the vector
    for (int i = 0; i < vector1.size(); ++i) {
        cout << vector1[i];
    }

    // remove the last element
    vector1.pop_back();

    // Fill constructor
    vector<int> vector2(10, 7); // Making vector of size 10 each with values 7

    return 0;
}