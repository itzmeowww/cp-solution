/*
/ᐠ｡‸｡ᐟ\
author : ItzMeOwww
created: 03 May 25 21:13
|    |ﾉ
======
*/
#define ll long long
#include <bits/stdc++.h>
using namespace std;

const int N = 15;
const int M = 105;

int cost[N];
vector<int> has[M];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int y;
            cin >> y;
            has[y].push_back(i);
        }
    }

    long long ans = 1e18;
    for (int i = 0; i < (1 << (2 * n)); i++) {

        int cou[M] = {0};
        long long cost_sum = 0;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) == (1 << j)) {
                // cout << "visit " << j << " ";
                cost_sum += cost[j + 1];
                for (int k = 0; k < has[j + 1].size(); k++) {
                    cou[has[j + 1][k]]++;
                }
            }
            if ((i & (1 << (j + n))) == (1 << (j + n))) {
                // cout << "visit " << j << " ";
                cost_sum += cost[j + 1];
                for (int k = 0; k < has[j + 1].size(); k++) {
                    cou[has[j + 1][k]]++;
                }
            }
        }
        // cout << "cost_sum " << cost_sum << endl;
        int ok = 1;
        // for (int j = 1; j <= m; j++) {
        //     cout << cou[j] << " ";
        // }
        // cout << endl;
        for (int j = 1; j <= m; j++) {
            if (cou[j] < 2) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            ans = min(ans, cost_sum);
        }
    }

    cout << ans << endl;
}