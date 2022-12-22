#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, vector<double> > m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int x;
        cin >> x;

        if(m.find(s) == m.end()) {
            vector<double> v(2,0);
            v[0] = x;
            v[1] = 1;
            m[s] = v;
        } else {
            m[s][0] += x;
            m[s][1]++;
        }
    }

    for(auto i : m) {
        cout << i.first << ' ' << i.second[0] / i.second[1] << '\n';
    }
}