#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> s;

    for(int i = 0; i < n; i++) {
        string name;
        cin >> name;

        int sz = s.size();
        s.insert(name);
        if(s.size() != sz) {
            cout << "new user added\n";
        } else {
            cout << "user already exists\n";
        }
    }
}