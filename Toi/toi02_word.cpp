#include <bits/stdc++.h>
using namespace std;
char arr[30][30];
int c[9];
int ii[8] = {0,-1,-1,-1,0,1,1,1};
int jj[8] = {-1,-1,0,1,1,1,0,-1};
int main(){
    int n,m;
    scanf(" %d %d",&n,&m);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            scanf(" %c",&arr[i][j]);
            if(arr[i][j] >= 'a') arr[i][j] += (-'a' + 'A');
        }
    }
    /*
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    */
    int q;
    string str;
    scanf(" %d",&q);
    int s1=0,s2=0;
    while(q--){
        cin >> str;
        for(int i = 0;i<str.size();i++){
            if(str[i] >= 'a') str[i] += (-'a' + 'A');
        }
        int yes=0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(arr[i][j] == str[0]){
                    for(int k = 0;k<8;k++){
                        c[k] = 0;
                    }
                    for(int k = 0;k<8;k++){
                        for(int l = 0;l<str.size();l++){
                            if(arr[i+ii[k]*(l)][j+jj[k]*(l)] == str[l] && i+ii[k]*(l) >= 1 && i+ii[k]*(l) <= n && j+jj[k]*(l) >=1 && j+jj[k]*(l) <= m){
                                c[k]++;
                                //cout << arr[i+ii[k]*(l)][j+jj[k]*(l)] << " ";
                            }
                            else{
                                break;
                            }
                            //cout << endl;
                            //cout << arr[i+ii[k]*(l)][j+jj[k]*(l)] << endl;
                        }
                    }
                    for(int k = 0;k<8;k++){
                        if(str.size()  == c[k]){
                            yes = 1;
                            s1 = i;
                            s2 = j;
                        }
                    }
                }
                if(yes == 1) break;
            }
            if(yes == 1) break;
        }
        printf("%d %d\n",s1-1,s2-1);
    }

}
