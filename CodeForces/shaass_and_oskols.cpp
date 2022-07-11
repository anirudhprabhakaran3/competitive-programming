#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> birds(n);
    for(int i = 0; i < n; i++) {
        cin >> birds[i];
    }

    int shots, wire, number;
    cin >> shots;
    for(int i = 0; i < shots; i++) {
        cin >> wire;
        wire--;
        cin >> number;
        // on left: number - 1
        // on right: birds[wire] - number
        if (wire-1 >= 0) {
            birds[wire-1] += number - 1;
        }
        if (wire+1 < n) {
            birds[wire+1] += (birds[wire]-number);
        }
        birds[wire] = 0;
    }

    for(int i = 0; i < n; i++) {
        cout << birds[i] << endl;
    }

    return 0;
}