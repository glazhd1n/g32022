#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    v.push_back(132);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}