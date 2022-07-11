#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector <int> gifting(n);

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        gifting[t - 1] = i;
    }

    for( int const& g: gifting) {
        cout << g+1 << " ";
    }

    return 0;
}