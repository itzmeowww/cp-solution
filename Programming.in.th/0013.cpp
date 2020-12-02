#include <bits/stdc++.h>
using namespace std;
int arr[11];
int main(){
    int sum = 0;
    for(int i = 1;i<=9;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int done = 0;
    for(int i = 1;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(sum-arr[i]-arr[j] == 100){
                arr[i] = arr[j] = 999;
                done = 1;
                break;
            }
        }
        if(done == 1) break;
    }
    
    for(int i = 1;i<=9;i++){
        if(arr[i] <= 99 ) cout << arr[i] << endl;
    }
}