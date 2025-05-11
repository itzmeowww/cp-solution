/*
/ᐠ｡‸｡ᐟ\
author : ItzMeOwww
created: 03 May 25 21:19
|    |ﾉ
======
*/
#define ll long long
#include <bits/stdc++.h>
using namespace std;

const int N = 2005;

int c[N], a[N];
int ans[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        cin >> c[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n - 1; i++) {
        ans[i] = 1e9;
        int summ = 0;
        for (int j = i - 1; j >= i - c[i]; j--) {
            ans[i] = min(ans[j] + 1 + summ, ans[i]);
            if (a[j] != 0)
                summ += ans[j];
        }
    }
    // for (int i = 1; i <= n - 1; i++) {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    for (int j = n - 1; j >= 1; j--) {
        if (a[j] != 0) {
            cout << ans[j] << endl;
            return 0;
        }
    }
}