#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,r,c,maxx;
    cin >> t;
    while(t--){
        cin >> r >> c;
        maxx = max(r,c);
        if(maxx%2){
            if(r == maxx){
                cout << (maxx-1)*(maxx-1) + c;
            }
            else{
                cout << (maxx-1)*(maxx-1) + 2*maxx - r;
            }
        }
        else{
            if(c == maxx){
                cout << (maxx-1)*(maxx-1) + r;
            }
            else{
                cout << (maxx-1)*(maxx-1) + 2*maxx - c;
            }
        }
        cout << endl;
    }   
}