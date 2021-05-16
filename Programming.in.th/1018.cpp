#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    int x;

    int dir = 1;

    int a = 0,b = 0;

    int aa[4] = {1,0,-1,0};
    int bb[4] = {0,1,0,-1};
    char dd[4] = {'N','E','S','W'};
    while(n--){
        cin >> str >> x;
        if(str == "LT"){
            dir--;
        }
        else if(str == "RT"){
            dir++;
        }
        else if(str == "FD"){

        }   
        else if(str == "BW"){
            dir+=2;
        }

        dir = ((dir%4)+4)%4;
        a += x*aa[dir];
        b += x*bb[dir];
        if(abs(a) >= 50000 || abs(b) >= 50000){
            cout << "DEAD";
            return 0;
        }
    }

    
    cout << b << " " << a <<  endl << dd[dir] ;
}