#include <bits/stdc++.h>
using namespace std;
queue<int>q;
int main(){
    int n,x,ai,ans=0;
    long long sum = 0;
    cin >> n >> x;
    for(int i = 1;i<=n;i++){
        cin >> ai;
        q.push(ai);
        sum += ai;
        while(!q.empty() && sum > x){
            sum -= q.front();
            q.pop();
        }
        if(sum == x){
            ans++;
        }
    }
    cout << ans;
}