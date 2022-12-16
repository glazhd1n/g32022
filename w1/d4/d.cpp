#include <bits/stdc++.h>

using namespace std;

string to_bin(int n) {
    if(n == 1) return "1";
    return to_bin(n / 2) + char(n % 2 + '0');

    // 0 + '0' = char(48) = '0'
    // 1 + '0' = char(49) = '1'

}

int main() {
    int n;
    cin >> n;

    string s = to_bin(n);
    cout << s << '\n';
}

/*

    8
    1) to_bin(8 / 2) + '0' = "1000"
        ^
        -----------------------
                              |
    2) to_bin(4 / 2) + '0' = "100"
        ^
        -----------------------
                              |
    3) to_bin(2 / 2) + '0' = "10"
        ^
        |
    4) "1"


*/


/*
    3
    1) to_bin(3 / 2) + '1' = "11" 
        ^
        |
    2) "1"


*/