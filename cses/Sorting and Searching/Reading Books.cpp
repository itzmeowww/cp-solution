#include <bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){

    int n;
    long long ti;
    cin >> n;
    long long sum = 0,maxx=0;
    for(int i = 1;i<=n;i++){
        cin >> ti;
        sum += ti;
        maxx = max(maxx,ti);
        v.push_back(ti);
    }
    cout << max(2*maxx,sum);

}