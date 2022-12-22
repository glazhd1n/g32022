#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int mx = INT_MIN;

    for(int i = 0; i < n; i++) {
        mx = max(v[i], mx);
    }

    cout << mx << '\n';
}