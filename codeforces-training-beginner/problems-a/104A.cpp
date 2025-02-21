#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int possibleWays = 0;

    for (int i = 1; i <= 11; i++) {
        if ((i + 10) == n) {
            if (i == 10) possibleWays += 15; // 4 cards: 10, jack, kings & 3 cards: queen
            else possibleWays += 4;
        }
    }

    cout << possibleWays << endl;

    return 0;
}