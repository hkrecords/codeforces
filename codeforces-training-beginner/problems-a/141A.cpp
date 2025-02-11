#include<bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, disorder;
    cin >> guest >> host >> disorder;

    string combined = guest + host;

    if (combined.length() != disorder.length()) {
        cout << "NO" << endl;
        return 0;
    }

    // Count frequency of characters in combined and disorder
    unordered_map<char, int> combinedCount, disorderCount;

    for (char c : combined) {
        combinedCount[c]++;
    }

    for (char c : disorder) {
        disorderCount[c]++;
    }

    // Compare frequency counts
    bool possible = true;
    for (auto& pair : combinedCount) {
        if (disorderCount[pair.first] != pair.second) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}