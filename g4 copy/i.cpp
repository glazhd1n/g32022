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
            cout << "new user added\n";
            m[s] = 1;
        } else {
            cout << "user already exists\n";
        }
    }
}