#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int mx = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mx < a[i][j]) {
                mx = a[i][j];
            }
        }
    }

    cout << mx << '\n';
}

/*
    [-1,-2,-3,-4,-5]
    int mx = INT_MIN;
    for in array;
        if mx < a[i]
            mx = a[i];
*/

/*
[
    [1,2,3,4,5]
    [1,2,3,4,5]
    []
    []
    []
]



*/