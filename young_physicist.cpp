#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> x(n), y(n), z(n);

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int x_sum = 0, y_sum = 0, z_sum = 0;

    for(int i = 0; i < n; i++) {
        x_sum += x[i];
        y_sum += y[i];
        z_sum += z[i];
    }

    if (x_sum == 0 && y_sum == 0 && z_sum == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}