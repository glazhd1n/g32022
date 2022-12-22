#include <bits/stdc++.h>

using namespace std;

int was[10][10];
char a[10][10];

void dfs(int i, int j) {
    was[i][j] = 1;
    if(a[i + 1][j]=='.' && !was[i+1][j]) {
        dfs(i+1, j);
    } 
    if(a[i-1][j] == '.' && !was[i-1][j]) {
        dfs(i-1, j);
    } 
    if(a[i][j+1]=='.' && !was[i][j+1]) {
        dfs(i, j+1);
    }
    if(a[i][j-1]=='.' && !was[i][j-1]) {
        dfs(i, j-1);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    dfs(1, 1);
    if(was[n][m]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

/*
6 5 
..... 
####. 
...#. 
.###. 
....# 
###..

*/