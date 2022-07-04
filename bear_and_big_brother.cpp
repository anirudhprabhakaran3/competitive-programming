#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double c = (double) a / b;
    int counter = 0;
    while(c <= 1) {
        c = c * 1.5;
        counter++;
    }
    cout << counter;
    return 0;
}