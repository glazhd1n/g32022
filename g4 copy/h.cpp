#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    map<string, int> m;
    map<string, int>::iterator it;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        m[s]++;
    }
    int cnt = 0;
    for(it = m.begin(); it != m.end(); it++) {
        if(it->second == 3) {
            cnt++;
        }
    }

    cout << cnt << '\n';
}


/*
    +7707707707707 1
    +7707707707707 2
    +7707707707707 3
*/


/*
*/