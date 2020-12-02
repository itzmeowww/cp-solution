#include <bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){
    int m,n;
    long long x;
    scanf(" %d %d",&m,&n);
    m = min(m,n);
    long long s = 100, e = 1e7;
    for(int i = 0;i<n;i++){
        scanf(" %lld",&x);
        v.push_back(x);
        s = max(s,x);
    }
    
    while(s < e){
        long long mid = (s + e)/2;
        int need = 1;
        long long sum = 0;
        for(auto x : v){
            if(sum +x > mid){
                sum = 0;
                need++;
            }
            sum += x;
        }
        // cout << mid << " " << need  << endl;
        if(need <=m) e = mid;
        else s = mid+1;
    }
    printf("%lld",s);

}