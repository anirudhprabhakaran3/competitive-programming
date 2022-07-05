#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector <int> numbers;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            numbers.push_back(s[i] - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if(i != numbers.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}