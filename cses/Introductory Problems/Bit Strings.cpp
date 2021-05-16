#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long i = 1;
    while(n--){
        i*=2;
        i%=(long long)(1e9+7);
    }
    cout << i;
}