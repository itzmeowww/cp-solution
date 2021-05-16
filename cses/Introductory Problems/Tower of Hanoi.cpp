#include <bits/stdc++.h>
using namespace std;

int solve(int n,int now,int to,int left){
    if(n == 1){
        cout << now << " " << to << endl;
    }
    else{
        solve(n-1,now,left,to);
        cout << now << " " << to << endl;
        solve(n-1,left,to,now);
    }
}

int main(){
    int n;
    cin >> n;
    cout << (1<<n)-1 << endl;
    solve(n,1,3,2);


}