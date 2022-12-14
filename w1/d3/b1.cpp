#include <bits/stdc++.h>

using namespace std;

void max(int a, int b) {
    if(a > b) {
        cout << a << '\n';
    } else {
        cout << b << '\n';
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    max(a, b);
}