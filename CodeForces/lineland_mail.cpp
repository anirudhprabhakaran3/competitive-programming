#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> positions(n);

    for(int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    cout << positions[1] - positions[0] << " " << positions[n-1] - positions[0] << endl;

    for(int i = 1; i < n-1; i++) {
        int min = (positions[i] - positions[i-1] < positions[i+1] - positions[i]) ? positions[i] - positions[i-1] : positions[i+1] - positions[i];
        int max = (positions[i] - positions[0] > positions[n-1] - positions[i]) ? positions[i] - positions[0] : positions[n-1] - positions[i];
        cout << min << " " << max << endl;
    }

    cout << positions[n-1] - positions[n-2] << " " << positions[n-1] - positions[0];

    return 0;
}