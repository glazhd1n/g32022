#include <bits/stdc++.h>

using namespace std;

char toUpper(char c) {
    if('a' <= c && c <= 'z') {
        return c - 32;
    } 
    return c;
}

int main() {
    char c;
    cin >> c;

    char l = toUpper(c);
    cout << l << '\n';
}