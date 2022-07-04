#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string strings[n];
    for(int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    int groups = 1;

    for(int i = 0; i < n-1; i++) {
        string first = strings[i];
        string second = strings[i+1];
        if (first[1] == second[0]) {
            groups++;
        }
    }

    cout << groups;
    return 0;
}