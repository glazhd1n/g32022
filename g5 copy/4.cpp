#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<int, int> m;
    vector<int> v;
    while(cin >> n) {
        if(m.find(n) == m.end()) {
            m[n]++;
            v.push_back(n);
        } else {
            m[n]++;
        }
    }
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ' << m[v[i]] << '\n';
    }
}