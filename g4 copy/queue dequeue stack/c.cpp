#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> q;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x == 1) {
            string name;
            cin >> name;
            q.push(name);
            cout << q.front() << '\n';
        } else {
            if(!q.empty()) {
                q.pop();
            }
            if(q.empty()) {
                cout << "queue is empty\n";
            } else {
                cout << q.front() << '\n';
            }
        }
    }
}