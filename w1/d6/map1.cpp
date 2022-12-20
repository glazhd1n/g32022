#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, string> m;
    for(int i = 0; i < 4; i++) {
        int x;
        cin >> x;

        string s;
        cin >> s;

        m[x] = s;
    }
    vector<pair<int, string> > v(m.begin(), m.end());
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}