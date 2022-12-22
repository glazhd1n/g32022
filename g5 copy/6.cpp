#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(m.find(s) == m.end()) {
            m[s]++;
            cout << "OK\n";
        } else {
            cout << s << m[s] << '\n';
            m[s]++;
        }
    }
}