#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int upper = 0, lower = 0;

    for (int i = 0; i < len; i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }

    for (int i = 0; i < len; i++) {
        if (upper > lower) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}