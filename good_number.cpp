#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll n, k, count = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        vector<bool> status(10);
        bool flag = true;
        for(int i = 0; i < temp.length(); i++) {
            status[temp[i]-'0'] = true;
        }
        for(int i = 0; i <= k; i++) {
            if (status[i] == false) {
                flag = false;
                break;
            }
        }
        if (flag) {
            count++;
        }
    }

    cout << count;

    return 0;
}