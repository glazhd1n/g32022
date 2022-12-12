#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[4][4];
    for(int i = 1; i <= 4; i ++) {
        for(int j = 1; j <= 4; j++) {
            a[i - 1][j - 1] = j;
        }
    }
    cout << a[1][2] << '\n';
}

/*
4 3
[
    [1,2,3],
    [1,2,3],
    [1,2,3],
    [1,2,3]
]
*/