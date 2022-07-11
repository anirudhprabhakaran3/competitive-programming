#include <bits/stdc++.h>

using namespace std;

int return_small(char a, char b) {
    int x = abs(a - b);
    int y = 26 - x;
    return (x < y) ? x : y;
}

int main() {
    string s;
    cin >> s;

    int score = 0;

    score += return_small('a', s[0]);

    for(int i = 0; i < s.length() - 1; i++) {
        score += return_small(s[i], s[i+1]);
    }

    cout << score;
    return 0;
}