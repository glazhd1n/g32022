#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> m;
    map<char, int>::iterator it;
    for(int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }

    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }
}

/*
    A 3
    B 3
    C 1
*/