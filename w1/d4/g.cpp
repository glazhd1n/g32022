#include <bits/stdc++.h>

using namespace std;

bool isPower(long long i, long long n) {
    if(n == i) return true;
    if(i > n) return false;
    return isPower(i << 1, n);
}

int main() {
    long long n;
    cin >> n;

    if(isPower(1, n)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}