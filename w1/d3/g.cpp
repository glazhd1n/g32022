#include <bits/stdc++.h>

using namespace std;

char to_lower(char z) {
    if('a' <= z && z <= 'z') {
        return z;
    } else {
        return z + 32;
    }
}


/*
65 - A
97 - a

97 - 65 = 32
*/

bool isVowel(char c) {
    c = to_lower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o';
}

string remove_vowels(string s) {
    string s1 = "";
    for(int i = 0; i < s.size(); i++) {
        if(isVowel(s[i]) == false) {
            s1 += s[i];
        }
    }
    return s1;
}

int main() {
    string s;
    getline(cin, s);
    string s1 = remove_vowels(s);

    cout << s1 << '\n';
}