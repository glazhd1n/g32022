#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int x = v[i] ^ v[j];
            set<int> s1 = s;
            s.insert(x);
            if(s != s1) {
                cnt++;
                s = s1;
            }
        }
    }
    cout << cnt << '\n';
}


/*

4
1 2 3 4

3
*/