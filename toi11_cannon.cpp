#include <bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    long long x,l;
    cin >> n >> m >> k >> l;
    for(int i = 1;i<=n;i++){
        cin >> x;
        v.push_back(x);
    }
    
    for(int i = 1;i<=k;i++){
        long long s=-1,e=-1;
        int ans = 0;
        int add = -1;
        for(int j = 1;j<=m;j++){
            cin >> x;
            int left = lower_bound(v.begin(),v.end(),x-l) - v.begin();
            int right = upper_bound(v.begin(),v.end(),x+l) - v.begin();
            if(s == -1){
                s = left;
                e = right;
            }
            else{
                if(left > e){
                    add = e;
                    ans += e - s;
                    s = left;
                    e = right;
                }
                else{
                    e = right;
                }
            }
        }
        // cout << e << "vs" << add << endl;
        if(e != add) ans += e-s;
        cout << ans << endl;
    }
}