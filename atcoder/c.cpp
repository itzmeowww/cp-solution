/*
/ᐠ｡‸｡ᐟ\
author : ItzMeOwww
created: 03 May 25 21:06
|    |ﾉ
======
*/
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int cou[200200];
vector<int> g[200200];
int pa[200200];

int fp(int x) {
    if (pa[x] == x)
        return x;
    return pa[x] = fp(pa[x]);
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        pa[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        cou[u]++;
        cou[v]++;
        g[u].push_back(v);
        g[v].push_back(u);

        pa[fp(u)] = fp(v);
    }
    if (n != m) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (cou[i] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (fp(i) != fp(1)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}