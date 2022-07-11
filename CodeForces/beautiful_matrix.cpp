#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[5][5];

    tuple<int, int> location;
    tuple<int, int> target;
    target = make_tuple(2, 2);

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1){
                location = make_tuple(i, j);
            }
        }
    }
    int distance = abs(get<0>(target)-get<0>(location)) + abs(get<1>(location) - get<1>(target));
    cout << distance;
    return 0;
}