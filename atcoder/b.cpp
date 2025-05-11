/*
/ᐠ｡‸｡ᐟ\
author : ItzMeOwww
created: 03 May 25 21:03
|    |ﾉ
======
*/
#define ll long long
#include <bits/stdc++.h>
using namespace std;

const int N = 200;

char s[N][N], t[N][N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t[i][j];
        }
    }
    int ans = 1e9;
    for (int k = 0; k <= 3; k++) {
        int cnt = k;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i][j] != t[i][j]) {
                    cnt++;
                }
            }
        }
        ans = min(ans, cnt);
        char temp[N][N];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp[j][n - 1 - i] = s[i][j];
            }
        }
        memcpy(s, temp, sizeof(s));
    }
    cout << ans << endl;
}