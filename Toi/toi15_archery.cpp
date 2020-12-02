#include <bits/stdc++.h>
using namespace std;
struct DATA{
    long long c,p;
    bool operator < (const DATA & d2) const {
        if(p == d2.p) return c < d2.c;
        return p < d2.p;
    }
};
DATA data[500500];
long long qs[500500];

int main(){
    int n;
    scanf(" %d",&n);
    long long sum = 0;
    long long bound = 1e18;
    for(int i = 1;i<=n;i++){
        scanf(" %lld",&data[i].c);
        bound = min(bound,data[i].c);
    }
    for(int i = 1;i<=n;i++){
        scanf(" %lld",&data[i].p);
        sum += data[i].p;
    }

    sort(&data[1],&data[n]+1);
    for(int i = 1;i<=n;i++){
        // cout << data[i].c << " " << data[i].p  << endl;
        qs[i] += qs[i-1] + data[i].c;
    }
    long long minn = 1e18;
    long long idx;
    for(int i = 1;i<=n;i++){
        if(data[i].p > bound) break;
        long long cost = sum + qs[i-1] - (n)*(data[i].p);
        // cout << sum << " " << qs[i-1] << " " <<(n)*(data[i].p) << " " << cost << endl;
        if(cost < minn){
            minn = cost;
            idx = data[i].p;
        }
    }
    

    printf("%lld %lld",idx,minn);


}