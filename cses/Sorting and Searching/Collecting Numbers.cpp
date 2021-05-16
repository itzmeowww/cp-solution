#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
vector<int>v;
int main(){

    int n;
    cin >> n;
    int x;
    int ans = 0;
    for(int i = 1;i<=n;i++){
        cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for(int i = 1;i<=n;i++){
        x = v[i-1];
        int idx = upper_bound(arr,arr+ans,x) - arr;
        if(ans == idx) ans++;
        arr[idx] = x;
        // cout << idx << endl;
        
    }
    cout << ans;
    


}