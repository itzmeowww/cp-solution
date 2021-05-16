#include <bits/stdc++.h>
using namespace std;
long long qs[1010];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> qs[i];
        qs[i] += qs[i-1];
    }
    int minn = 1e9;
    int a,b;
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j++){
            long long sum1 = qs[i-1];
            long long sum2 = qs[j-1] - qs[i-1];
            long long sum3 = qs[n] - qs[j-1];
            long long maxx = max(abs(sum1-sum2),max(abs(sum2-sum3),abs(sum3-sum1)));

            if(maxx < minn){
                minn = maxx;
                a = i;
                b = j;
            }
        }
    }
    cout << a << " " << b;
}