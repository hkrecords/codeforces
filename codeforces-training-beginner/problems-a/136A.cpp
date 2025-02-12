#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> gift(n);
    for (int i = 0; i < n; i++) {
        gift[v[i] - 1] = i + 1;
        
    }

    for (int i = 0; i < n; i++) {
        cout << gift[i] << " ";
    }
    
    return 0;
}