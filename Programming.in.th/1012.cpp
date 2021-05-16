#include <bits/stdc++.h>
using namespace std;

int sum[7];
int arr[7];
int main(){

    int n;
    cin >> n;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=5;j++){
            cin >> arr[j];
            sum[j] += arr[j];
        }
    }
    int ans = sum[1] + (6*sum[2] + 4*sum[3] + 2*sum[4] + 1*sum[5] +7)/8;
    cout << ans;

}