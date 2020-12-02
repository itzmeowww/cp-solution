#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin >> n;
    long long Min = 2e9;
    long long Max = -2e9; 
    for (int i = 1;i<=n;i++){
        cin >> x;
        Min = min(Min,x);
        Max = max(Max,x);
    }
    cout << Min << endl << Max << endl;
}