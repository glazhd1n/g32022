#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_set<int> s;
    unordered_set<int>::iterator it;
    s.insert(10);
    s.insert(9);
    s.insert(10);
    s.insert(11);
    s.insert(12);
    s.insert(13);
    s.insert(5);
    s.insert(5);
    s.insert(12);
    vector<int> v(s.begin(), s.end());
    reverse(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}