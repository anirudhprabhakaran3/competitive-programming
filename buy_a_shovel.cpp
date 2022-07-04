#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int counter = 1;
    while(true) {
        if ((counter * k) % 10 == 0) {
            break;
        }
        if ((counter * k) % 10 == r) {
            break;
        } else {
            counter++;
        }
    }

    cout << counter;

    return 0;
}