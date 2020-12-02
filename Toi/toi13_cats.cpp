#include <bits/stdc++.h>
using namespace std;

unsigned long long arr[2000200];
vector<unsigned long long>v;

int main(){
    int n;
    scanf(" %d",&n);
    for(int i = 1;i<=n;i++){
        scanf(" %llu",&arr[i]);
    }
    unsigned long long s = 0, e = (1 << 31);
    while(s < e){
        unsigned long long mid = (s+e)/2;
        for(int i = 1;i<=n;i++){
            if(arr[i] > mid){
                v.push_back(arr[i]);
            }
        }
        int can = 1;
        if(!v.empty()){
            for(int i = 0;i<v.size()-1;i++){
                if(v[i] == v[i+1]){
                    i++;
                }
                else{
                    can = 0;
                    break;
                }
            }
        }
        
        if(can) e = mid;
        else s = mid+1;

        v.clear();
    }
    printf("%llu",s);

}