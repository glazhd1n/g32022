#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> s;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        
        s.insert(s1 + ' ' + s2);
    }
    
    cout << s.size();
}