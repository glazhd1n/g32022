#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt[n];
    for (int i = 0; i < n ; i++){
        cnt[i] = 0;
        for (int j = 0; j < m; j++){
            if (a[i][j] >= 0){
                cnt[i]++;
            }
        }
        cout << cnt[i];
        cout << endl;
    }
    int mx = -1;
    int pos = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if  (cnt[i] > mx){
                mx = cnt[i];
                pos = i;
            }
        }
    }
    for (int i = 0; i < n - 1; i++){
            if (cnt[i] != cnt[i+1]){
                cout << pos << " ";
                return 0;
            }
        }
    

   cout << "Num equal";
}