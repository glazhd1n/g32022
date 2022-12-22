#include <bits/stdc++.h>

using namespace std;

void plusOne(int &n) {
    n += 1;
}

int main() {
    int n;
    cin >> n;
    
    plusOne(n);
    cout << n << '\n';
}