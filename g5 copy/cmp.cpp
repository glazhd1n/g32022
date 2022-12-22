#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2) {
    return p1.second < p2.second; // false swap
}

int main() {
    map<string, int> m;
    set<int> s;
    m["Sabir"] = 14;
    m["David"] = 13;
    m["Adilek"] = 12;
    m["Artem"] = 10;
    m["Aiken"] = 11;
    vector<pair<string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}