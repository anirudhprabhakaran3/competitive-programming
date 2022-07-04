#include <bits/stdc++.h>

using namespace std;

int main() {

    string stones;
    string commands;

    cin >> stones;
    cin >> commands;

    int position = 0;

    for (int i = 0; i < commands.length(); i++) {
        if (commands[i] == stones[position]) {
            position++;
        }
    }

    cout << position+1;

    return 0;
}