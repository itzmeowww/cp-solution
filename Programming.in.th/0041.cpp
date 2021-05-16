#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;


    if(n == 1){
        printf("2.000000");
    }
    else if(n==3){
        printf("3.732051");
    }
    else if(n%2==0){
        printf("%.6lf",double(n));
    }
    else{
        printf("%.6lf",double(n + 0.464102));
    }

}