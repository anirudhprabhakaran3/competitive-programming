#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> calories(4);
    for(int i = 0; i < 4; i++) {
        cin >> calories[i];
    }

    string s;
    cin >> s;

    int total_calories = 0;

    for(int i = 0; i < s.length(); i++) {
        int x = int(s[i]) - int('0') - 1;
        total_calories += calories[x];
    }

    cout << total_calories;

    return 0;
}