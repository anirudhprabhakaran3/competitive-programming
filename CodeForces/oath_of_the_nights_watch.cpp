#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> power(n);

    for(int i = 0; i < n; i++) {
        cin >> power[i];
    }

    sort(power.begin(), power.end());
    int upper = power[n-1], lower = power[0], count = 0;
    
    for(int i = 0; i < n; i++) {
        if (power[i] != lower && power[i] != upper) {
            count++;
        }
    }

    cout << count;

    return 0;
}