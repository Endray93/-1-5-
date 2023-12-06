// Білет№1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int r = 10;

void taskone() {
    int X[r] = { 1, 1, 2, 0, 0, 2, 1, 2, 0, 2 };
    int sum = 0;

    cout << "Array elements: ";
    for (int i = 0; i < r; ++i) {
        cout << X[i] << " ";
    }

    int count[3] = { 0 };

    for (int i = 0; i < r; ++i) {
        count[X[i]]++;
    }

    cout << "\nSorted array elements X: ";
    for (int i = 0; i < 3; ++i) {
        while (count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }

    for (int i = 0; i < r; ++i) {
        sum += X[i];
    }
    cout << "\nThe sum of array elements: " << sum << endl;
}

int main() {
    taskone();
    return 0;
}

