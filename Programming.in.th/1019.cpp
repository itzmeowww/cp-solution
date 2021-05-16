#include <bits/stdc++.h>
using namespace std;
char A[222],B[222];
// string aa,bb;
int main(){
    // cin >> aa >> b;
    scanf(" %s",&A[1]);
    scanf(" %s",&B[1]);
    int a = 1,b = 1;
    while(A[a+1]!='\0') a++;
    while(B[b+1]!='\0') b++;

    
    // l <= 200 -> brute force
    int st = 1,si = 1,max_st=0,max_si=0;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=b;j++){
            si = 0;
            while(i + si <= a && j + si <= b){
                if(A[i + si] == B[j+si]){
                    si++;
                }
                else{
                    break;
                }
            }
            if(si > max_si){
                max_si = si;
                max_st = i;
            }
        }
    }
    // cout << max_st << " " << max_si << endl;
    for(int i = max_st;i<max_st+max_si;i++){
        printf("%c",A[i]);
    }




    
    
}