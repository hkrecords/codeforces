#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    int a, b;
    int currentPassengers = 0;
    int minimumPossible = 0;

    while(n--) {
        cin >> a >> b;

        currentPassengers -= a;
        currentPassengers += b;

        if (currentPassengers > minimumPossible) minimumPossible = currentPassengers;
    }

    cout << minimumPossible << endl;
    
    return 0;
}