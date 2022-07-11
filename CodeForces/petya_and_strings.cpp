#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int counter = 0;
    for(int i = 0; i < s1.length(); i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        counter += s1[i] - s2[i];
        if (counter != 0) {
            break;
        }
    }

    if (counter < 0) {
        cout << -1;
    } else if (counter > 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    
    return 0;
}