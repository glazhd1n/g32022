#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;

    for(int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> s >> x;
        m[s] = x;
    }
    vector<pair<string, int> > v(m.begin(), m.end());
    
}