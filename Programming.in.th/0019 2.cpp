#include <bits/stdc++.h>
using namespace std;
int s[15],b[15];
int main(){
    int n;
    cin >> n;
    int ans = 2e9;
    for(int i = 0;i<n;i++){
        cin >> s[i] >> b[i];
    }
    for(int i = 1;i<=(1<<n);i++){
        
        int ss = 1;
        int bb = 0;

        for(int j = 0;j<n;j++){
            
            if((i&(1<<j)) == (1<<j)){
                ss *= s[j];
                bb += b[j]; 
            }
            ans = min(ans,abs(ss-bb));
        }
        
    }
    cout << ans;
}
