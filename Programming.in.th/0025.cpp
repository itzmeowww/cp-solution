#include <bits/stdc++.h>
using namespace std;

int main(){

    string A,B,op;
    cin >> A >> op >> B;
    if(op == "*"){
        int si = A.size() + B.size() - 2;
        cout << "1";
        for(int i = 1;i<=si;i++) cout << "0";
    }
    else{
        int si = max(A.size(),B.size());
        for(int i = 0;i<si;i++){
            if(i == si-A.size() && i == si-B.size()){
                cout << "2";
            }
            else if(i == si-A.size()){
                cout << "1";
            }
            else if(i == si-B.size()){
                cout << "1";
            }
            else{
                cout <<"0";
            }
        }
        
        
    }


}