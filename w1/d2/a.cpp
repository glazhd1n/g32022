#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "dfa sjg afs gjf ags h";
    cout << s.size() << '\n';
    
    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << '\n';
    }
}

/*

dfa sjg afs gjf ags h
|      |            |
s[0]   s[7]         s[20]
*/