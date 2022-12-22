#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int cse = 1;
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        while(q--) {
            string c;
            cin >> c;
            
            if(c == "S") {
                int d;
                cin >> d;
                for(int j = 0; j < v.size(); j++) {
                    v[j] += d;
                }
            } else if(c == "M") {
                int d;
                cin >> d;
                
                for(int j = 0; j < v.size(); j++) {
                    v[j] *= d;
                } 
            } else if(c == "D") {
                int d;
                cin >> d;
                
                for(int j = 0; j < n; j++) {
                    v[j] /= d;
                }
            } else if(c == "P") {
                int x, y;
                swap(v[x], v[y]);
            } else if(c == "R") {
                reverse(v.begin(), v.end());
            }
        }
        cout << "Case " << cse << ":\n";
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
        cse++;
    }
}