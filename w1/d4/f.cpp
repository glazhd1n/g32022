#include <bits/stdc++.h>

using namespace std;

int sum_of_digits(int i, string s) {
    if(i == s.size()) return 0;
    return sum_of_digits(i + 1, s) + s[i] - '0';
}

int main() {
    string s;
    cin >> s;

    int x = sum_of_digits(0, s);
    cout << x << '\n';
}

/*

    5362478
    1) 30 + 5 = 35
        ^
        ---------
                |
    2) 27 + 3 = 30
        ^
        ---------
                |
    3) 21 + 6 = 27
        ^
        ---------
                |
    4) 19 + 2 = 21
        ^
        ---------
                |
    5) 15 + 4 = 19
        ^
        ---------
                |
    6) 8 + 7 = 15
       ^
       ---------
               |
    7) 0 + 8 = 8
        ^
        |
    8)  0



*/