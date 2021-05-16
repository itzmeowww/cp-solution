#include <bits/stdc++.h>
using namespace std;
int arr[200200];
int update(int idx,int x,int n){
    for(int i = idx;i<=n;i += ((-i)&i)){
        arr[i] += x;
    }
}
int find(int idx,int n){
    int ret = 0;
    for(int i = n;i>=idx;i -= ((-i)&i)){
        ret += arr[i];
    }
}
int main(){
    int n,k;
    cin >> n >> k;

}