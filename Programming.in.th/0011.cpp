#include <bits/stdc++.h>
using namespace std;
int cou[50];
int main(){
    int x,ans=0;
    for(int i = 1;i<=10;i++){
        cin >> x;
        if(cou[x%42]++ == 0){
            ans++;
        }
    }
    cout << ans;
}