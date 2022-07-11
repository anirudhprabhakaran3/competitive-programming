#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(int caseno) {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    double median = 0;

    for(int i = 0; i < m-1; i++) {
        median += a[n-1-i];
    }

    m = n - m + 1;

    if (m%2 == 0) {
        median += ((double)(a[m/2] + a[(m/2)-1]))/2.0;
    } else {
        median += a[m/2];
    }

    cout << "Case #" << caseno << ": " << fixed << setprecision(5) << median << endl;

}

int main() {

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}