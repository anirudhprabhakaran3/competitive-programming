#include <bits/stdc++.h>

using namespace std;

int main() {

    char s;
    set <char> letters;

    do {
        cin >> s;
        if (s == '{' || s == ',' || s == ' ' || s == '}') {
            continue;
        }
        letters.insert(s);
    } while(s != '}');

    cout << letters.size();

    return 0;
}