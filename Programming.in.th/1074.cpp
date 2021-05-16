#include <bits/stdc++.h>
using namespace std;
char g[111][111];
int main(){

    int r,c;
    cin >> r >> c;

    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            cin >> g[i][j];
        }
    }
    int r1,c1,s1=0,r2,c2,s2=0;
    int end = 0;
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            if(g[i][j] == 'x'){
                end = 1;
                r1 = i;
                c1 = j;
                while(1){
                    if(g[r1][c1+s1+1] == 'x' && g[r1+s1+1][c1] == 'x'){
                        s1++;
                    }
                    else break;
                }
                break;
            }
        }
        if(end) break;
    }
    for(int i = r1;i<=r1+s1;i++){
        for(int j = c1;j<=c1+s1;j++){
            g[i][j] = '.';
        }
    }
    // // for(int i = 1;i<=r;i++){
    //     for(int j = 1;j<=c;j++){
    //         cout << g[i][j];

    //     }
    //     cout << endl;
    // }
    end = 0;
    for(int i = r;i>=1;i--){
        for(int j = c;j>=1;j--){
            if(g[i][j] == 'x'){
                end = 1;
                // cout << "! " << i << " " << j << endl;
                r2 = i;
                c2 = j;
                while(1){
                    if(g[r2][c2-s2-1] == 'x' || g[r2-s2-1][c2] == 'x'){
                        s2++;
                    }
                    else break;
                }
                break;
            }
        }
        if(end) break;
    }
    s1++;
    s2++;
    cout << r1 << " " << c1 << " " << s1 << endl;
    cout << max(r2-s2+1,1) << " " << max(c2-s2+1,1) << " " << s2 << endl;

}
