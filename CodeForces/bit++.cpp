#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x = 0;
    char f, m, l;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> f >> m >> l;
        if(m=='+') {
            x++;
        }
        if (m=='-') {
            x--;
        }
    }

    cout << x;

    return 0;
}