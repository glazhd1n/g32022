#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        m[x]++;
    }
    int mm;
    cin >> mm;
    int cnt = 0;
    for(int i = 0; i < mm; i++) {
        int x;
        cin >> x;
        
        if(m.find(x) != m.end()) {
            cnt++;
        }
    }
    
    cout << cnt << '\n';
}