#include <bits/stdc++.h>

using namespace std;

int main() {

    char start = 'a';
    int n, k;
    cin >> n >> k;
    string s = "";

    int k_counter = 0;

    while(n--) {
        s = s + char(int(start) + k_counter);
        if (k_counter == k-1) {
            k_counter = 0;
        } else {
            k_counter++;
        }
    }

    cout << s;

    return 0;
}