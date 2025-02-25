#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int presenter_chips = 0;
    int current_walrus = 1;

    while (m > 0) {
        if (m >= current_walrus) {
            m -= current_walrus;
            current_walrus++;
            if (current_walrus > n) {
                current_walrus = 1;
            }
        } else {
            presenter_chips = m;
            m = 0;
        }
    }

    cout << presenter_chips << endl;
    return 0;
}