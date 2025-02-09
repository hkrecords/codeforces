#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string ticket;
    cin >> n >> ticket;

    bool isLucky = true;
    for (char c : ticket) {
        if (c != '4' and c != '7') {
            isLucky = false;
            break;
        }
    }

    if (!isLucky) {
        cout << "NO" << endl;
    } else {
        int half = n / 2;
        int firstHalf = 0, secondHalf = 0;

        for (int i = 0; i < half; i++) {
            firstHalf += (ticket[i] - '0');
        }

        for (int i = half; i < n; i++) {
            secondHalf += (ticket[i] - '0');
        }

        if (firstHalf == secondHalf) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}