//Write a program to calculate the sum of all numbers from 1 to n using a for loop.
#include <iostream>

using namespace std;

int factorial(int n) {
    int x = n;
    for (int i = 0; i < n; i++) {
        x += i;
    }
    return x;
}

int main() {
    int y = 3;
    int x = factorial(y);
    cout << x << endl;
}