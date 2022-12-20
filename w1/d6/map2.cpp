#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    map<int, string> m;
    for(int i = 0; i < 4; i++) {
        int x;
        cin >> x;

        string s;
        cin >> s;

        m[x] = s;
    }
    if(m.find(1) == m.end()) {
        cout << "Такого элемента нет!\n";
    } else {
        cout << "Такой элемент есть ему соответствует значение " << m[1] << '\n';
    }
}