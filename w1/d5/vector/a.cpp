#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;
    for(int i = 0; i < 100; i++) {
        v.push_back(i);
    }

    for(int i = 0; i < 100; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}