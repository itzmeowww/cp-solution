#include <bits/stdc++.h>
int ans[5];
// i v x l c
int main(){
    int d;
    scanf(" %d",&d);
    for(int j = 1;j<=d;j++){
        int i = j;
        if(i >= 100){
            ans[4]+=i/100;
            i%=100;
        }

        if(i >= 90){
            ans[4]++;
            ans[2]++;
            i -= 90;
        }
        if(i >= 50){
            ans[3]++;
            ans[2]+= (i - 50)/10;
            i%=10;
        }
        if(i >= 40){
            ans[3]++;
            ans[2]++;
            i-=40;
        }
        if(i >= 10){
            ans[2]+=i/10;
            i%=10;
        }
        if(i>=9){
            ans[2]++;
            ans[0]++;
            i = 0;
        }
        if(i>=5){
            ans[1]++;
            ans[0] += i - 5;
            i = 0;
        }
        if(i>=4){
            ans[0]++;
            ans[1]++;
            i-=4;
        }
        if(i>=1){
            ans[0]+=i;
        }



    //printf("\n");
    }
    for(int i = 0;i<5;i++){
        printf("%d ",ans[i]);
    }
}
