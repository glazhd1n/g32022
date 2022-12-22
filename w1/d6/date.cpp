#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, pair<int, int> > m;
    int day, month, year;
    while(cin >> day) {
        if(day == 0) {
            break;
        }
        cin >> month >> year;
        m[year] = make_pair(day, month);
    }
    for(auto i : m) {
        if(i.second.first < 10) {
            cout << 0 << i.second.first << ' ';
        } else {
            cout << i.second.first << ' ';
        }
        if(i.second.second < 10) {
            cout << 0 << i.second.second << ' ';
        } else {
            cout << i.second.second << ' ';
        }
        string ss = to_string(i.first);
        while(ss.size() != 4) {
            ss = '0' + ss;
        }
        cout << ss << '\n';
    }
}