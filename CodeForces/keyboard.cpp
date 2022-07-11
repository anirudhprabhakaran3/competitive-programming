#include <bits/stdc++.h>

using namespace std;

string row1 = "qwertyuiop";
string row2 = "asdfghjkl;";
string row3 = "zxcvbnm,./";

string find_string(char x) {
    for(int i = 0; i < 10; i++) {
        if (row1[i] == x) {
            return row1;
        }
        if (row2[i] == x) {
            return row2;
        }
        if (row3[i] == x) {
            return row3;
        }
    }
}

int find_index(char x, string s) {
    for(int i = 0; i < s.length(); i++) {
        if(x == s[i]) {
            return i;
        }
    }
}


int main() {

    char instr;
    cin >> instr;

    string s, new_string = "", temp_string;
    cin >> s;

    int shift = (instr == 'R') ? -1 : 1;
    int temp_int;

    for(int i = 0; i < s.length(); i++) {
        temp_string = find_string(s[i]);
        temp_int = find_index(s[i], temp_string);
        new_string += temp_string[temp_int+shift];
    }

    cout << new_string;

    return 0;
}