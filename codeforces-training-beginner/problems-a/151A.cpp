#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int totalLime = c * d;

    int toast = 0;

    while (true) {
        if ((totalDrink >= nl * n) and (totalLime >= 1 * n) and (p >= np * n)) {
            totalDrink -= (nl * n);
            totalLime -= (1 * n);
            p -= (np * n);

            toast++;
        }
        else break;
    }

    cout << toast << endl;
    
    return 0;
}