#include <bits/stdc++.h>

using namespace std;

void solve() {
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 >= l2 && l1 <= r2) {
        cout << l1;
    } else if (l2 >= l1 && l2 <= r1) {
        cout << l2;
    } else {
        cout << l1+l2;
    }
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
    return 0;
}