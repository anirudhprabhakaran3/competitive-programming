#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    bool serejas_turn = true;
    int sereja = 0, dima = 0;

    while(numbers.size() > 0) {
        int front = 0;
        int last = numbers.size() - 1;

        int bigger = numbers[front] > numbers[last] ? numbers[front] : numbers[last];

        if (serejas_turn) {
            sereja += bigger;
        } else {
            dima += bigger;
        }

        if (bigger == numbers[front]){
            numbers.erase(numbers.begin());
        } else {
            numbers.pop_back();
        }

        serejas_turn = !serejas_turn;
    }

    cout << sereja << " " << dima;

    return 0;
}