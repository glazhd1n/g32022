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
    set<int>::iterator it;
    int sum = 0;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << ' ';
    }
}