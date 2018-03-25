#include<iostream>
using namespace std;

int main() {

    int m = 4;
    int n = 4;

    int inp[4][4] = {{1,  2,  3,  4},
                     {5,  6,  7,  8},
                     {9,  10, 11, 12},
                     {12, 13, 14, 15}};
    int T = 0, B = m - 1, L = 0, R = n - 1; // idxs
    int dir = 0; // direction - 0 is right, 1 is down, 2 is left, 3 is up 
    while (T <= B && L <= R) {

        switch (dir) {
            case 0:
                for (int i = L; i <= R; i++) {
                    cout << inp[T][i] << " ";
                }
                T++;
                dir = 1;
                break;
            case 1:
                for (int i = T; i <= B; i++) {
                    cout << inp[i][R] << " ";
                }
                R--;
                dir = 2;
                break;
            case 2:
                for (int i = R; i >= L; i--) {
                    cout << inp[B][i] << " ";
                }
                B--;
                dir = 3;
                break;
            case 3:
                for (int i = B; i >= T; i--) {
                    cout << inp[i][L] << " ";
                }
                L++;
                dir = 0;
                break;
        }

    }
    
    
    return 0;



}