#include <bits/stdc++.h>
using namespace std;
queue<int>q;
int main(){
    int n,a,b,xi;
    long long ans = -1e18,sum = 0;
    cin >> n >> a >> b;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        q.push(xi);
        if(q.size() >= a){
            
            while(q.size() <= b && q.size() > a && sum - q.front() >= sum){
                sum -= q.front();
                q.pop();
                ans = max(ans,sum);  
            }
            while(q.size() > b){
                q.pop();
            }
            ans = max(ans,sum);    
        }
        else{
            sum += xi;
        }
        
        cout << "::" << ans << endl;
    }
    cout << ans;

}