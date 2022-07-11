#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> events(n);
    for(int i = 0; i < n; i++) {
        cin >> events[i];
    }

    int counter_crimes = 0;
    int police_counter = 0;
    for(int i = 0; i < n; i++) {
        if (events[i] > 0) {
            police_counter += events[i];
        } else if (events[i] == -1 && police_counter > 0) {
            police_counter--;
        } else {
            counter_crimes++;
        }
    }

    cout << counter_crimes;

    return 0;
}