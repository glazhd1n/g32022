#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int tochka = s.find("."), sobachka = s.find("@");
    int cntTochka = 0, cntSobachka = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            cntTochka++;
        } else if(s[i] == '@') {
            cntSobachka++;
        }
    }

    if(cntTochka == 1 && cntSobachka == 1 && sobachka < tochka && sobachka + 1 != tochka && tochka != s.size() - 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}