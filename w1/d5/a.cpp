#include <bits/stdc++.h>

using namespace std;
int a[10];
int main() {
    int x;
    while(cin >> x) {
        if(x == 0) {
            break;
        }

        a[x]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << a[i] << ' ';
    }
}

/*
    1 1 4 1 5 8 6 3 5 1 0

    0 1 2 3 4 5 6 7 8 9
    0 4 0 1 1 2 1 0 1 0

*/