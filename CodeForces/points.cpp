#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int beautiful(vector<int> a, int d) {
    int counter = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) {
        for(int j = i+1; j < a.size(); j++) {
            for(int k = j+1; k < a.size(); k++) {
                if (a[k] - a[i] > d) {
                    continue;
                } else {
                    counter++;
                }
            }
        }
    }
    return counter;
}

int main() {

    int q, d;
    cin >> q >> d;
    vector<int> points;
    vector<int>::iterator it;
    for(int i = 0; i < q; i++) {
        int a;
        cin >> a;
        it = find(points.begin(), points.end(), a);
        if (it != points.end()) {
            points.erase(it);
        } else {
            points.push_back(a);
        }
        cout << beautiful(points, d) << endl;
    }

    return 0;
}