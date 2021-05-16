#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    scanf(" %d",&n);
    int to = n;
    if(to%2==0) to--;
    for(int i = 1;i<=n/2;i++){
        for(int j = 1;j<=to;j++){
            if(j == ((to+1)/2-i+1) || j == ((to+1)/2 + i-1)){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    for(int i = (n+1)/2;i>=1;i--){
        for(int j = 1;j<=to;j++){
            if(j == ((to+1)/2-i+1) || j == ((to+1)/2 + i-1)){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}