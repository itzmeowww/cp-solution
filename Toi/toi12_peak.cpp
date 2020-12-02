#include <bits/stdc++.h>
using namespace std;
priority_queue<int>pq;
vector<int>ans;
stack<int>st;
int main(){
    
    int n,k;
    int x;
    scanf(" %d %d",&n,&k);
    int dir = -2;
    int bx;
    cin >> bx;
    for(int i = 2;i<=n;i++){
        scanf(" %d",&x);
        if(dir == -2){
            if(bx > x){
                dir = -1;
                pq.push(bx);
            }
            else if(bx == x){
                dir = 0;
            }
            else{
                dir = 1;
            }
        }
        if(bx == x){
            dir = 0;
        }
        else if(bx < x){
            dir = 1;
            if(i == n){
                pq.push(x);
            }
        }
        else if(bx > x){
            if(dir == 1){
                pq.push(bx);
                dir = -1;
            }
        }
        bx = x;
    }
    int kk = k;
    while(kk && !pq.empty()){
        // cout << pq.top() << endl;
        if(ans.empty() || ans.back() != pq.top()){
            ans.push_back(pq.top());
            kk--;
        }
        pq.pop();
    }
    int si = ans.size();
    if(si == 0){
        printf("-1");
        return 0;
    }
    if(si < k){
        for(int i = si-1;i>=0;i--){
            printf("%d\n",ans[i]);
        }
    }
    else{
        for(auto a : ans){
            printf("%d\n",a);
        }
    }
}