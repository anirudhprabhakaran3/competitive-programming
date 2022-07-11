#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, b, d, orange_size;
    cin >> n >> b >> d;

    int total = 0, count = 0;

    for(int i = 0; i < n; i++) {
        cin >> orange_size;
        if (orange_size <= b) {
            total += orange_size;
        }
        if (total > d) {
            count++;
            total = 0;
        }
    }

    cout << count;

    return 0;
}