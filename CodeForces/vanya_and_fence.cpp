#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int width = 0, temp = 0;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > h) {
            width += 2;
        } else {
            width++;
        }
    }

    cout << width;

    return 0;
}