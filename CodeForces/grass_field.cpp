#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    int n, one, two, three, four;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> one >> two;
        cin >> three >> four;

        if(one == 0 && two == 0 && three == 0 && four == 0) {
            cout << "0\n";
            continue;
        }

        if (one == 0 || two == 0 || three == 0 || four == 0) {
            cout << "1\n";
            continue;
        }

        cout << "2\n";
    }

    return 0;
}