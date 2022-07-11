#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n < 26) {
        cout << "NO";
        return 0;
    }

    vector<bool> status(26);

    for(int i = 0; i < n; i++) {
        char x = tolower(s[i]);
        status[x-'a'] = true;
    }

    for(int i = 0; i < 26; i++) {
        if (status[i] == false) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}