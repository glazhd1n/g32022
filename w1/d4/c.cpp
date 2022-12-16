#include <bits/stdc++.h>

using namespace std;

int nthDegree(int n) {
    if(n == 0) return 1;
    return nthDegree(n - 1) * 2;
}

int main() {
    int n;
    cin >> n;

    int x = nthDegree(n);
    cout << x << '\n';
}

/*

    5
    1)  16 * 2 = 32
        ^
        ---------
                |
    2)  8 * 2 = 16
        ^
        ---------
                |
    3)  4 * 2 = 8
        ^
        ---------
                |
    4)  2 * 2 = 4
        ^
        ---------
                |
    5)  1 * 2 = 2
        ^
        |
    6)  1

*/