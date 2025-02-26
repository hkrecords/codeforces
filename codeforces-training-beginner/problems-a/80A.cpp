#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int nextPrime(int num) {
    int nextNum = num + 1;
    while (true) {
        if (isPrime(nextNum)) {
            return nextNum;
        }
        nextNum++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    if (isPrime(m) && nextPrime(n) == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
