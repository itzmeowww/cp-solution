#include <bits/stdc++.h>
using namespace std;
char g[25][120];
int main(){
    int n,s,h;
    scanf(" %d",&n);
    int mh = 0,ms=0;
    while(n--){
        scanf(" %d %d",&s,&h);
        mh = max(h,mh);
        ms = max(ms,s+2*h);
        int ma=0,mb=0;
        int fa=0,fb=0;
        int ar=0,br=0;
        for(int i = h;i>=1;i--){

            //

            if(g[i][s+i] != '\\' && ma == 0) g[i][s+i] = '/';
            else if(ma == 0){
                g[i][s+i] = 'v';
                fa++;
                ma = 1;
                //cout << "HI" << endl;
            }
            else {
                //cout << "qq" << endl;
                int ss = s+i,e;
                g[i][s+i] = 'X';
                if(ar){
                    //g[i][s+i+1+2*fa++] = 'X';
                    e = s+i+1+2*fa++;
                }
                else{
                    //g[i][s+i+2*fa++] = 'X';
                    e = s+i+2*fa++;
                }

                for(int j = min(ss,e);j<=max(ss,e);j++) g[i][j] = 'X';

            }

            if(g[i][s+i-1] == '\\'){
                ma = 1;
                ar = 1;
            }


            if(g[i][s+2*h-i+1] != '/' && mb == 0)g[i][s+2*h-i+1] = '\\';
            else if(mb == 0){
                g[i][s+2*h-i+1] = 'v';
                mb = 1;
                fb++;
            }
            else{
                //cout << "www" << endl;
                int e;
                int ss = s+2*h-i+1;
                //g[i][s+2*h-i+1] = 'X';
                if(br){
                    //g[i][s+2*h-i-2*fb++] = 'X';
                    e = s+2*h-i-2*fb++;
                }
                else{
                    //g[i][s+2*h-i+1-2*fb++] = 'X';
                    e = s+2*h-i+1-2*fb++;
                }

                for(int j = min(ss,e);j<=max(ss,e);j++) g[i][j] = 'X';
            }
            if(g[i][s+2*h-i+2] == '/'){
                 mb = 1;
                 br = 1;
            }

        for(int j = s+i+1;j<=s+2*h-i;j++) g[i][j] = 'X';
        }


    }
    for(int i = mh;i>=1;i--){
        int nub=0;
        for(int j = 2;j<=ms;j++){
            if(g[i][j] == 'v' || g[i][j] == 'X' || g[i][j] == '/' || g[i][j] == '\\')printf("%c",g[i][j]);
            else printf(".");
        }
        printf("\n");
    }



}
