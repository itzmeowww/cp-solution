#include <bits/stdc++.h>
using namespace std;

struct DATA{
    int x;
    int _2;
    int _3;
    int _5;
    int _7;
    bool operator < (const DATA & d2) const {
        return x < d2.x;
    }
};
vector<DATA>v;
int main(){
    int m,n;
    scanf(" %d %d",&m,&n);
    int x,s,e;
    for(int i = 1;i<=m;i++){
        scanf(" %d %d %d",&x,&s,&e);
        int _2 = 0;
        int _3 = 0;
        int _5 = 0;
        int _7 = 0;
        while(x % 2 == 0){
            x /= 2;
            _2++;
        }
        while(x % 3 == 0){
            x /= 3;
            _3++;
        }
        while(x % 5 == 0){
            x /= 5;
            _5++;
        }
        while(x % 7 == 0){
            x /= 7;
            _7++;
        }
        v.push_back({s,_2,_3,_5,_7});
        v.push_back({e+1,-_2,-_3,-_5,-_7});
    }
    int ans = 0;
    long long maxx = 0;
    long long cou = 0;
    long long _2 = 0;
    long long _3 = 0;
    long long _5 = 0;
    long long _7 = 0;
    int idx = 0;
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++){
        if(idx < 2*m){
            while(idx < 2*m && v[idx].x == i){
                // cout << " x : " << v[idx].x << " " << v[idx]._2  << " " << v[idx]._3 << " " << v[idx]._5 << " " <<  v[idx]._7 <<endl; 
                _2 += v[idx]._2;
                _3 += v[idx]._3;
                _5 += v[idx]._5;
                _7 += v[idx]._7;
                idx++;
            }
        }
        
        cou = (_2+1)*(_3+1)*(_5+1)*(_7+1);
        // cout << i << " " << cou << " " << _2 << ", " << _3 << ", " << _5 << ", " << _7 <<  endl;
        if(cou > maxx){
            ans = 1;
            maxx = cou;
        }
        else if(cou == maxx) ans++;

    }
    printf("%lld %d",maxx,ans);
}