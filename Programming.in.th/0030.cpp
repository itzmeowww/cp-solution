#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    long long a=0,b=0;
    cin >> str;
    int ii = 0;
    for(auto c : str){
        if(ii == 0){
            ii = 1;
        }
        else{
            a*=10;
            b*=10;
        }
        a += (c-'0');
        b += (c-'0');
        a%=3;
        b%=11;
        
    }
    cout << a << " " << b;

}