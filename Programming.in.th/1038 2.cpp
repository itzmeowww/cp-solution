#include <bits/stdc++.h>
using namespace std;
double p[22][22];
// unordered_map<int,double>tot[22];
double tot[3][1048600];

int arr[22];

int main(){
    int n;
    cin >> n;
    // cout << (1<<n) << endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            // dp[i][j] = 1;
            cin >> p[i][j];
            p[i][j]/=100.0;
            if(j == 1){
                tot[1][(1<<(i-1))] = p[i][1];

                
            }
        }
    }
    // for(int i = 1;i<(1<<n);i++) cout << tot[1][i] << " ";
    // cout << endl;
    for(int i = 2;i<=n;i++){

        // for(int ii = 1;ii<(1<<(n));ii++) tot[i%2][ii] = 0;
        memset(arr,0,sizeof arr);
       for(int j = 1;j<i;j++){
           arr[n-j] = 1;
       }

       do{
           int j = 0;
           for(int k = 0;k<n;k++){
               j*=2;
               j+=arr[k];
           }

            for(int k = 1;k<=n;k++){
                if((j & (1<<(k-1))) == 0){
                    tot[i%2][(j | (1<<(k-1)))] = max(tot[i%2][(j | (1<<(k-1)))] , tot[(i+1)%2][j] * p[k][i]);
                }
            }

       }while(next_permutation(arr,arr+n));

        
        // for(int ii = 1;ii<(1<<n);ii++) cout << tot[i%2][ii] << " ";
        // cout << endl;
    }
    // double ans = (double) tot[n][(1<<n)-1];
    // for(int i = 1;i<n;i++){
    //     ans/=100.0;
    // }
    printf("%.12lf",tot[n%2][(1<<n)-1]*100);


}