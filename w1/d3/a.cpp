#include <bits/stdc++.h>

using namespace std;

void print() {
    cout << "Hello World\n";
}

string printt() {
    string s1 = "Bla Bla";
    for(int i = 0;  i < s1.size(); i++) {
        if(s1[i] == 'B') {
            s1[i] = 'A';
        }
    }
    return s1 + " Hello World";
}

int main() {
    // for(int i = 0; i < 40; i++) {
    //     print();
    // }

    string s = printt();
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'H') {
            s[i] = 'W';
        }
    }
    cout << s << '\n';
    cout << printt() << '\n';
}