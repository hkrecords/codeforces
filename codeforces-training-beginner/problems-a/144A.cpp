#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int maxHeight = *max_element(heights.begin(), heights.end());
    int minHeight = *min_element(heights.begin(), heights.end());

    int minPos = 0, maxPos = 0;

    for (int i = 0; i < n; i++) {
        if (maxHeight == heights[i]) {
            maxPos = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (minHeight == heights.at(i))  {
            minPos = i;
            break;
        }
    }

    int swaps = maxPos + (n - 1 - minPos);

    if (maxPos > minPos) swaps -= 1;
    
    cout << swaps << endl;

    return 0;
}