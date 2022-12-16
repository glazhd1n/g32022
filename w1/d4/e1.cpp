#include <bits/stdc++.h>

using namespace std;
int cnt = 0;
bool bin_search(int n, int a[], int target, int l, int r) {
    int mid = (l + r) / 2;
    if(a[mid] == target) return true;
    if(l == r) return false;
    if(a[mid] > target) r = mid;
    else if(a[mid] < target) l = mid + 1;
    return bin_search(n, a, target, l, r);
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

    if(bin_search(n, a, target, 0, n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    cout << cnt << '\n';
}