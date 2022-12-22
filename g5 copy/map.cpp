#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2) {
    return p1.second > p2.second; // false swap
}

int main() {
    map<string, int> m;
    map<string, int>::iterator it;
    m["Sabir"] = 14;
    m["David"] = 13;
    m["Adilek"] = 12;
    m["Artem"] = 10;
    m["Aiken"] = 11;
    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }
}