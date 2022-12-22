#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    map<string, int>::iterator it;
    for(int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> s >> x;

        m[s] += x;
    }

    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }


}


/*
    HundredMillionStarsFromTheSky 10
    WhereStarsLand 18
    TheThirdCharm 100
    HusbandForHundredDays 1
*/