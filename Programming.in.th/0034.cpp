#include <bits/stdc++.h>
using namespace std;


int main(){
    int A,B,C,D;
    cin >> A >> B >> C;
    int aa = 999999;
    int bb,cc,dd;
    for(int i = -abs(C);i<=abs(C);i++){
        if(i == 0) continue;
        int b = i;
        int d = C/i;
        if(b*d != C) continue;
        for(int j = -abs(A);j<=abs(A);j++){
            if(j == 0) continue;
            int a = j;
            int c = A/j;
            if(a*c != A) continue;
            if(a <= 0 || c <= 0) continue;
            if(B == (a*d + b*c)){
                if(a < aa){
                    aa = a;
                    bb = b;
                    cc = c;
                    dd = d;
                }
                else if(a == aa){
                    if(b < bb){
                        aa = a;
                        bb = b;
                        cc = c;
                        dd = d;
                    }
                }
                // cout << a << " " << b << " " << c << " " << d;
                // return 0;
            }
        }

        
    }
    if(aa == 999999){
        cout << "No Solution";
    }
    else{
        cout << aa << " " << bb << " " << cc << " " << dd;
    }
    
}