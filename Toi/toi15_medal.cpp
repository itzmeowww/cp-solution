#include <bits/stdc++.h>
using namespace std;
int t[500500];
int h[500500];
int a[500500];
int main(){
    int n;
    scanf(" %d",&n);
    for(int i = 0;i < n;i++){
        scanf(" %d",&t[i]);
    }
    for(int i = 0;i < n;i++){
        scanf(" %d",&h[i]);
    }
    sort(t,t+n);
    sort(h,h+n);
    reverse(h,h+n);

    long long ans = 0;
    for(int i = 0;i<n;i++){
        a[i] = t[i]+h[i];
    }
    sort(a,a+n);
    for(int i = 0;i<n-1;i++){
        ans += a[i+1] - a[i];
    }
    printf("%lld",ans);
}