#include <bits/stdc++.h>

using namespace std;

int n;
int a[146341375];



int main() {
    map<int, string> m;
    for(int i = 0; i < 4; i++) {
        int x;
        cin >> x;

        string s;
        cin >> s;

        m[x] = s;
    }
    
    m.erase(3);
    for(auto i : m) {
        cout << i.first << ' ' << i.second << '\n';
    }
}