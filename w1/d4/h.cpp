#include <bits/stdc++.h>

using namespace std;

int count_of_evens(int i, string s) {
    if(i == s.size()) return 0;
    return count_of_evens(i + 1, s) + (s[i] % 2 == 0);
}

int main() {
    string s;
    cin >> s;

    int cnt = count_of_evens(0, s);
    cout << cnt << '\n';
}



/*
    s="23456", i = 0
    1) cnt(1, s) + ('2' % 2 == 0)
    2) cnt(2, s) + ('3' % 2 == 0)
    3) cnt(3, s) + ('4' % 2 == 0)
    4) cnt(4, s) + ('5' % 2 == 0)
    5) cnt(5, s) + ('6' % 2 == 0)
        ^
        |
    6) 0



    1)  2 + (1) = 3
        ^
        -----------
                  |
    2)  2 + (0) = 2
        ^
        ----------
                 |
    3) 1 + (1) = 2
        ^
        -----------
                  |
    4)  1 + (0) = 1
        ^
        -----------
                  |
    5)  0 + (1) = 1
        ^
        |
    6)  0


*/