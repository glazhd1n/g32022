#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(30);
    s.insert(30);
    s.insert(50);
    s.insert(50);
    s.insert(50);
    s.insert(50);
    vector<int> v(s.begin(), s.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}