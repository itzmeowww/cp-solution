#include <bits/stdc++.h>
using namespace std;
long long A[125][125];
int main(){
    int m,n;
    cin >> m >> n;
    long long x;
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            cin >> A[i][j];
        }
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            cin >> x;
            A[i][j] += x;
        }
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
        cout << A[i][j] << " ";
        }
        cout << endl;
    }
}