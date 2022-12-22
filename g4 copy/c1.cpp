#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin() + 1, v.end() - 1); // [begin, end)

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}