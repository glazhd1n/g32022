#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ')') {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(')');
            }
        } else {
            st.push('(');
        }
    }
    if(st.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

/*

LIFO
last in first out
input: 1 2 3 4 5 6 7

cout << st.top << '\n';
st.pop();

7 6 5 4 3 2 1
*/


/*

(()())

YES
())(
)(
NO
((()
((
*/