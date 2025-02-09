#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> map(n);
    for (int i = 0; i < n; ++i) {
        cin >> map[i];
    }

    vector<pair<int, int>> stars;

    // Find the positions of the three asterisks
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (map[i][j] == '*') {
                stars.push_back({i + 1, j + 1}); // +1 to convert to 1-based indexing
            }
        }
    }

    // Determine the fourth position
    int x, y;

    // Check the x-coordinate
    if (stars[0].first == stars[1].first) {
        x = stars[2].first;
    } else if (stars[0].first == stars[2].first) {
        x = stars[1].first;
    } else {
        x = stars[0].first;
    }

    // Check the y-coordinate
    if (stars[0].second == stars[1].second) {
        y = stars[2].second;
    } else if (stars[0].second == stars[2].second) {
        y = stars[1].second;
    } else {
        y = stars[0].second;
    }

    cout << x << " " << y << endl;

    return 0;
}
