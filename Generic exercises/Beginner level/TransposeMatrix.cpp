//Write a function to transpose a 3x3 matrix.
#include <iostream>

using namespace std;

int main() {
    int AList [3][3] = {{3, 5, 7},
                    {1, 2, 3},
                    {3, 6, 9}
                    };
    int BList [3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            BList[j][i] = AList[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << BList[i][j] << " ";
        } cout << endl;
    }
}