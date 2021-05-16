#include <bits/stdc++.h>
using namespace std;

int ans[200200],arr[200200];
int main(){
    int n,xi;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        ans[i] = i-1;
        while(arr[ans[i]] >= arr[i]){
            // cout << endl << "::" << ans[i] <<  endl;
            if(ans[i] == -1) break;
            ans[i] = ans[ans[i]];
            
        }
        cout << ans[i]+1 << " ";
    }
    

}