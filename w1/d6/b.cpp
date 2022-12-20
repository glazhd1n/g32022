#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> v;

    for(int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
}