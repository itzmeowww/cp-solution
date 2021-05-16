#include <bits/stdc++.h>
using namespace std;
int p[200100];
int main(){
    int n,pi;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> p[i];
    }
    sort(p+1,p+1+n);
    int mid1,mid2;
    if(n%2==1){
        mid1 = p[n/2];
        mid2 = mid1;
    }
    else {
        mid1 = p[n/2];
        mid2 = p[n/2+1];
    }
    long long sum1 = 0,sum2=0;
    for(int i = 1;i<=n;i++){
        sum1 += abs(p[i]-mid1);
        sum2 += abs(p[i]-mid2);
    }
    cout << min(sum1,sum2);

}