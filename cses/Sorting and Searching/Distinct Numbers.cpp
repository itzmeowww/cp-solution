#include <bits/stdc++.h>
using namespace std;
map<int,int>cou;
int main(){

    int n;
    int x;
    int ans = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(cou[x]++==0){
            ans++;
        }
    }
    cout << ans;
    


}