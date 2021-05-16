#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0;i<(1<<n);i++){
        // cout << i << endl;
        string ans = "";

        if(((1<<(n-1)) & i) == (1<<(n-1))) ans += "1";
        else ans += "0";
        // cout << ":" << ans << endl;
        for(int j = n-1;j>=1;j--){
            int a = ((((1<<(j)) & i) == (1<<(j))) ? 1 : 0);
            int b = ((((1<<(j-1)) & i) == (1<<(j-1))) ? 1 : 0);
            // cout << a << " " << b << endl;
            if(a == b) ans += "0";
            else ans += "1";
        }
        cout << ans << endl;
    }




}