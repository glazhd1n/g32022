#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, int> > &p1, pair<int, pair<int, int> > &p2) {
    if(p1.first == p2.first) {
        if(p1.second.second == p2.second.second) {
            return p1.second.first < p2.second.first;
        }
        return p1.second.second < p2.second.second;
    } else {
        return p1.first < p2.first;
    }
}

int main() {
    vector<pair<int, pair<int, int> > >v;
    int day, month, year;
    while(cin >> day) {
        if(day == 0) {
            break;
        }

        cin >> month >> year;

        v.push_back(make_pair(year, make_pair(day, month)));
    }
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < v.size(); i++) {
        if(v[i].second.first < 10) {
            cout << 0 << v[i].second.first << ' ';
        } else {
            cout << v[i].second.first << ' ';
        }
        if(v[i].second.second < 10) {
            cout << 0 << v[i].second.second << ' ';
        } else {
            cout << v[i].second.second << ' ';
        }
        string year1 = to_string(v[i].first);
        while(year1.size() != 4) {
            year1 = '0' + year1;
        }
        cout << year1 << '\n';
    }
}