#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int mx = INT_MIN, pos = 0;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if(x > 0) {
                cnt++;
            }
        }
        if(cnt > mx) {
            mx = cnt;
            pos = i + 1;
        }
        a[i] = cnt;
    }

    for(int i = 0; i < n - 1; i++) {
        if(a[i] != a[i + 1]) {
            cout << pos << '\n';
            return 0;
        }
    }
    cout << "Numbers are equal\n";
}

/*

3 4
1 1 -3 1 -4 2 2 1 1 -2 2 1

2 3
1 -1 3 2 2 2
 
*/