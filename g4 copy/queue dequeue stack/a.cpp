#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()) {
        cout << q.front() << '\n';
        q.pop();
    }
}


/*

FIFO
first in first out

input: 1 2 3 4 5 6 7
1 2 3 4 5 6 7

7
1 2 3 4 5 6 7
*/