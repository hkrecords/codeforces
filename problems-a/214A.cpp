#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, m; 
    cin >> n >> m;

    int maxValue = max(n, m);
    int count = 0;

    for (int i = 0; i <= maxValue; i++) {
        for (int j = 0; j <= maxValue; j++) {
            if (((i * i) + j == n) and (i + (j * j) == m)) count++;
        }
    }

    cout << count << endl;

    return 0;
}