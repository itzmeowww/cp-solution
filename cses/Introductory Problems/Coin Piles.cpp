#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if((a%3==0 && b%3==0) || (a+b)%2 == 1 ){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}