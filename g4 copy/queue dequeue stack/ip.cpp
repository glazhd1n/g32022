#include <bits/stdc++.h>

using namespace std;

bool range(int a) {
    return 0 <= a && a <= 255;
}

int main() {
    int a,b,c,d;
    char x,y,z;
    cin >> a >> x >> b >> y >> c >> z >> d;

    if(range(a) && range(b) && range(c) && range(d)) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
}