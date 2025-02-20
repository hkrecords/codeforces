#include<bits/stdc++.h>
using namespace std;

bool isLucky(int num) {
    if (num == 0) return false;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 and digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main () {
    long long n;
    cin >> n;

    int luckyDigitCount = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 or digit == 7) {
            luckyDigitCount++;
        }
        n /= 10;
    }
    
    if (isLucky(luckyDigitCount)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}