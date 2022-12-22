#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;
    set<int>::iterator it;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(-1);
    s.insert(-1);
    s.insert(-1);
    s.insert(-1);
    vector<int> v(s.begin(), s.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}