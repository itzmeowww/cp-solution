#include <bits/stdc++.h>
using namespace std;
char str[10000005];
int pi[5000005];
int main(){
    int n;
    scanf(" %d",&n);
    scanf(" %s",&str[1]);
    for(int i = 1;i<=n;i++) str[i+n] = str[i];
    int k = 0;
    for(int i = 2;i<=n;i++){
        while(k > 0 && str[k+1] != str[i]){
            k = pi[k];
        }
        if(str[k+1] == str[i]) k++;
        pi[i] = k;
    }
    int first = -1;
    int sec = -1;
    k = 0;
    for(int i = 1;i<=2*n;i++){
        while(k > 0 && str[k+1] != str[i]){
            k = pi[k];
        }
        if(str[k+1] == str[i]) k++;
        if(k == n){
            // cout << i << endl;
            if(first == -1) first = i;
            else if(sec == -1){
                sec = i;
                printf("%d",sec-first);
                return 0;
            }
            k = pi[k];
        }
    }

}