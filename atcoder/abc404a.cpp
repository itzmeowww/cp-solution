/*
/ᐠ｡‸｡ᐟ\
author : ItzMeOwww
created: 03 May 25 20:56
|    |ﾉ
======
*/
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int arr[5000];
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        arr[s[i]] = 1;
    }

    for (int i = 'a'; i <= 'z'; i++) {
        if (arr[i] == 0) {
            cout << (char)i;
            return 0;
        }
    }
}