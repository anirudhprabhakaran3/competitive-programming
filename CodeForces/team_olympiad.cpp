#include <bits/stdc++.h>

using namespace std;

int main() {

    vector <int> programming;
    vector <int> maths;
    vector<int> sports;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        switch(temp) {
            case 1: programming.push_back(i); break;
            case 2: maths.push_back(i); break;
            case 3: sports.push_back(i); break;
        }
    }

    int smallest = (programming.size() < maths.size()) ? programming.size() : maths.size();
    smallest = (smallest < sports.size()) ? smallest : sports.size();

    cout << smallest << endl;
    for(int i = 0; i < smallest; i++) {
        cout << programming[i] + 1 << " " << maths[i] + 1 << " " << sports[i]+1 << endl;
    }

    return  0;
}