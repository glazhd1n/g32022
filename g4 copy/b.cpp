#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int> > v) {
    
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> vn(m);
    vector<vector<int> > v(n, vn); 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << v[i][j] + 5 << ' ';
        }
        cout << '\n';
    }
}

/*
3 4

1 2 3 4   
5 6 7 8    
9 10 11 12  
*/