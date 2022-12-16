#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

bool has_digit(int n, int a[], int target, int i) {
    cnt++;
    if(i == n) return false;
    if(a[i] == target) return true;
    return has_digit(n, a, target, i + 1);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    if(has_digit(n, a, target, 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    cout << cnt << '\n';
}