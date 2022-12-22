#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;
    for(int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << v.size() << '\n'; 
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++) {
    }
}