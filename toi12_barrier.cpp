#include <bits/stdc++.h>
using namespace std;
struct DATA{
    long long sum;
    int idx;
};
deque<DATA>dq;
int main(){
    
    int x;
    int n,w;
    long long sum = 0, maxx = 0;
    int ansIdx;
    int si = 0;
    scanf(" %d %d",&n,&w);
    for(int i = 1;i<=n;i++){
        scanf(" %d",&x);
        sum += x;
        if(dq.empty()){
            dq.push_back({sum,i});
        }
        else{
            while(!dq.empty() && dq.back().sum > sum){
                dq.pop_back();
            }
            dq.push_back({sum,i});
            while(!dq.empty() && dq.front().idx < i-w){
                dq.pop_front();
            }
        }
        if(sum - dq.front().sum > maxx){
            maxx = sum - dq.front().sum;
            ansIdx = i - dq.front().idx;
        }
        else if(sum - dq.front().sum == maxx){
            ansIdx = min(ansIdx,i - dq.front().idx);
        }
    }
    printf("%lld\n%d",maxx,ansIdx);
    
}