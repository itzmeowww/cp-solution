#include <bits/stdc++.h>
using namespace std;
int nugget[150];
int main(){
    nugget[6] = nugget[9] = nugget[20] = 1;
    for(int i = 1;i<=100;i++){
        if(nugget[i] == 1){
            nugget[i+6] = nugget[i+9] = nugget[i+20] = 1;
        }
    }

    int n;
    int nub=0;
    scanf(" %d",&n);
    for(int i = 1;i<=n;i++){
        if(nugget[i]){
            printf("%d\n",i);
            nub++;
        }
    }
    if(nub == 0) printf("no");

}
