#include <bits/stdc++.h>
using namespace std;
int ans[300];

int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 1;i<= (1<<k);i++){
        ans[i] = 1e9;
    }
    for(int i = 1;i <= n;i++){
        int w;
        cin >> w;
        int x = 0;
        int pi;
        for(int j = 1;j <= k;j++){
            cin >> pi;
            x*=2;
            x += pi;
        }
        // cout << w << " " << x << endl;
        ans[x] = min(ans[x],w);
    }
    for(int i = 1;i<(1<<k);i++){
        for(int j = i+1;j<(1<<k);j++){
            ans[i|j] = min(ans[i|j],ans[i] + ans[j]);
        }
    }
    cout << ans[(1<<k)-1];

    
    // cout << (1<<k);

}