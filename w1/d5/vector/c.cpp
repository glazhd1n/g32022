#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;
    int x = ceil((float)s.size() / (float)s1.size());
    for(int i = 1; i < x; i++) {
        s1 += s1;
    }

    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        ans += char((s[i] - 'a' + s1[i]) - 26 * ((s[i] - 'a' + s1[i]) > 'z'));

    }
    cout << ans << '\n';
}



// 110
// 111
// 100
// 105
// 101
// 107
// 109