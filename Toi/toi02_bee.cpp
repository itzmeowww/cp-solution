#include <bits/stdc++.h>
using namespace std;
struct BEE{
    long long int w,s;
};
BEE year[30];
int main(){
    year[0].w = 1;
    year[0].s = 0;
    for(int i = 1;i<=25;i++){
        year[i].w = year[i-1].w + year[i-1].s + 1;
        year[i].s = year[i-1].w;
    }
    int inp;
    while(1){
        scanf("%d",&inp);
        if(inp == -1) break;
        printf("%lld %lld\n",year[inp].w,year[inp].w+year[inp].s+1);

    }
}
