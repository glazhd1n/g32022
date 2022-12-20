#include <bits/stdc++.h>

using namespace std;
int v[101];
int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;

            if(x > 0) {
                v[i]++;
            }
        }
    }
    int mx = -1, pos = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] > mx) {
            mx = v[i];
            pos = i + 1;
        }
    }

    for(int i = 0; i < n - 1; i++) {
        if(v[i] != v[i + 1]) {
            cout << pos << '\n';
            return 0;
        }
    }
    cout << "Numbers are equal\n";
}


/*
    n = 2 m = 3
    1 -1 3 
    2 2 2

    v = {2, 3}


*/