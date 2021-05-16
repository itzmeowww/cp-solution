#include <bits/stdc++.h>
using namespace std;

long long sq[15][15];

long long solve(int r,int c,int rr,int cc, int n){
    
    long long ret = 0;
    if(n == 0) return 0;
    // cout << r << " " << c << endl;
    ret += sq[r][c];
    return ret + solve(r+rr,c+cc,rr,cc,n-1);
}
int cou[120];

int main(){

    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin >> sq[i][j];
            cou[sq[i][j]]++;
            if(cou[sq[i][j]] > 1){
                cout << "No";
                return 0;
            }
        }
    }
    long long sum = -1,ret;

    for(int i = 1;i<=n;i++){
        ret = solve(i,1,0,1,n);
        if(sum == -1 || sum == ret){
            sum = ret;
        }
        else{
            cout << "No";
            return 0;
        }
    }
    for(int i = 1;i<=n;i++){
        ret = solve(1,i,1,0,n);
        if(sum == -1 || sum == ret){
            sum = ret;
        }
        else{
            cout << "No";
            return 0;
        }
    }
    ret = solve(1,1,1,1,n);
    if(sum == -1 || sum == ret){
        sum = ret;
    }
    else{
        cout << "No";
        return 0;
    }
    ret = solve(1,n,1,-1,n);
    if(sum == -1 || sum == ret){
        sum = ret;
    }
    else{
        cout << "No";
        return 0;
    }
    

    cout << "Yes";
}