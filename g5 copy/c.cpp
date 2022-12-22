#include <bits/stdc++.h>

using namespace std;

int main() {
    for(int i = 0;i < 100000;) {
        if(i % 2 == 0) {
            i += 1;
        } else {
            i += 3;
        }
        cout << i << '\n';
    }
}