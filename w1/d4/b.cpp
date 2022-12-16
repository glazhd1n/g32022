#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
    if(n == 1) {
        return 1;
    }
    return sum(n - 1) + n;
}

int main() {
    int n;
    cin >> n;

    int x = sum(n);
    cout << x << '\n';
}


/*
    5
    1) 10 + 5 = 15
        ^
        |
        ---------
                 |
    2)  6 + 4 = 10
        ^
        |
        --------
               |
    3) 3 + 3 = 6
        ^
        |
        --------
               |
    4) 1 + 2 = 3
       ^
       |
    5) 1



*/