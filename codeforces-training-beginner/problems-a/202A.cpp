#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;

    int asciiMax = 0;

    string newStr;

    for (int i = 0; i < s.length(); i++) {
        asciiMax = max(asciiMax, int(s[i]));
    }

    for (int i = 0; i < s.length(); i++) {
        if (asciiMax == int(s[i])) newStr += s[i];
    }

    cout << newStr << endl;

    return 0;
}