#include<bits/stdc++.h>
using namespace std;

int main () {
    string str1, str2;

    cin >> str1 >> str2;
    
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    int output = 0;

    for (int i = 0; i < str1.length(); i++) {
        if (int(str1[i]) < int(str2[i])) {
            output = -1;
            break;
        } else if (int(str1[i]) > int(str2[i])) {
            output = 1;
            break;
        } 
    }

    cout << output << endl;
    
    return 0;
}