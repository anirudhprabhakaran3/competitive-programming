#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll n, k;

    cin >> n >> k;

    if (n%2 == 1) {
        n++;
    }

    bool odd = true;

    if (k > n / 2) {
        odd = false;
        k -= n/2;
    }

    if (odd) {
        cout << 2*k-1;
    } else {
        cout << 2*(k);
    }

    return 0;
}