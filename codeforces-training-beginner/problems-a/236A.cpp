#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;

    string newstr = "";

    for(int i = 0; i < s.length(); i++) {
        bool isUnique = true;
        for(int j = 0; j < newstr.length(); j++) {
            if (s[i] == newstr[j]) {
                isUnique = false;
                break;
            }
        }        
        if (isUnique) newstr += s[i];
    }

    cout << ((newstr.length() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
}