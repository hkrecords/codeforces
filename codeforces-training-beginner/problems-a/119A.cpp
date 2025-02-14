#include <bits/stdc++.h>
using namespace std;

int calculateGCD(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    bool simonTurn = true;

    while (true) {
        if (simonTurn) {
            int move = calculateGCD(a, n); // Calculate GCD for Simon
            if (move > n) {
                cout << "1" << endl;
                break;
            }
            n -= move;
        } else {
            int move = calculateGCD(b, n); // Calculate GCD for Antisimon
            if (move > n) {
                cout << "0" << endl;
                break;
            }
            n -= move;
        }
        simonTurn = !simonTurn;
    }

    return 0;
}