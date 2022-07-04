#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <char> stones(n);

    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }

    int counter = 0;

    for(int i = 0; i < n-1; i++) {
        if (stones[i] == stones[i+1]) {
            counter++;
        }
    }

    cout << counter;

    return 0;
}