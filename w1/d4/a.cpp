#include <bits/stdc++.h>

using namespace std;

void hello() {
    cout << "Hello" << endl;
    hello();
}

int main() {
    hello();
}



/*
    hello()
    1) print Hello |
                   √
                   2) print Hello |
                                  √
                                 3) print Hello
                                                ...
                                                    mnogo) print Hello |
                                                                       √
                                                                       stack overflow




*/