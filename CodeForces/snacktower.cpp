#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, next, t;
    cin >> n;

    next = n-1;

    vector<bool> has(n);

    for(int i = 0; i < n; i++) {
        cin >> t;
        has[t-1] = true;
        while(next >= 0 && next < n && has[next]) {
            cout << next+1 << " ";
            next--;
        }
        if (i != n-1) {
            cout << endl;
        }
    }


    return 0;
}