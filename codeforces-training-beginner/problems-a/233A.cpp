#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) cout << -1 << endl;
    else {
        for (int i = 1; i <= n/2; i++) {
            int num1, num2;
            num1 = 2 * i;
            num2 = (2 * i) - 1;

            cout << num1 << " "  << num2 << " ";          
        }
    }
    return 0;
}