#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    set <char> characters;
    int len = s.length();

    for (int i = 0; i < len; i++) {
        characters.insert(s[i]);
    }

    if (characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}