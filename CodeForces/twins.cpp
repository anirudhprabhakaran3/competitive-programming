#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> coins(n);

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end(), greater<>());

    int ideal_position = 0;

    while(true) {
        int my_sum = 0, other_sum = 0;
        for(int i = 0; i <= ideal_position; i++) {
            my_sum += coins[i];
        }

        for(int i = ideal_position+1; i < n; i++) {
            other_sum += coins[i];
        }

        if(my_sum <= other_sum) {
            ideal_position++;
        } else {
            break;
        }
    }

    cout << ideal_position+1;

    return 0;
}