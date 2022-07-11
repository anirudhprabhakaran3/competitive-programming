#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string status;
    cin >> status;

    int a_counter = 0, d_counter = 0;
    for(int i = 0; i < n; i++) {
        if (status[i] == 'A') {
            a_counter++;
        } else {
            d_counter++;
        }
    }

    if (a_counter > d_counter) {
        cout << "Anton";
    } else if (a_counter == d_counter) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }

    return 0;
}