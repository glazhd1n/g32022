#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(13);
    dq.push_front(12);
    dq.push_front(1153);
    while(!dq.empty()) {
        cout << dq.back() << '\n';
        dq.pop_back();
    }

}