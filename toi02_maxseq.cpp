#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x,all=0,maxx=0;
    int seq[3000];
    int s=0,st = 0,ed=0;
    scanf(" %d",&n);
    vector<int>ans,v;
    for(int i = 0;i<n;i++){
        scanf(" %d",&seq[i]);

        //cout << st << " " << ed << endl;

        all+=seq[i];
        if(all < 0){
            all = 0;
            s = i+1;
        }

        if(all > maxx){
            st = s;
            ed = i;
            maxx = all;
        }

    }

    if(maxx == 0){
        printf("Empty sequence");
    }
    else{

        for(int i = st;i<=ed;i++){
            printf("%d ",seq[i]);
        }

        printf("\n%d",maxx);
    }

}
