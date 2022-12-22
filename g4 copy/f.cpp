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

    vector<pair<int, pair<int, int> > > v (m.begin(), m.end());
}