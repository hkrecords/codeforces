#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int solution = 0;
    
    while (n--) {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;
        
        if (Petya + Vasya + Tonya >= 2) {
            solution += 1;
        }
    }
    
    cout << solution << endl;
    return 0;
}