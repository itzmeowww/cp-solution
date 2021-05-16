#include <bits/stdc++.h>
using namespace std;
char g[11][11];
char g2[21][21];
int main(){
    int r,c;
    cin >> r >> c;
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            cin >> g[i][j];
        }
    }

    

    int x;
    cin >> x;
    if(x%360 == 0){
        for(int i = 1;i<=r;i++){
            for(int j = 1;j<=c;j++){
                cout << g[i][j];
            }
            cout << endl;
        }
    }
    else if(x%360 == 90){
        for(int j = 1;j<=c;j++){
            for(int i = r;i>=1;i--){
                cout << g[i][j];
            }
            cout << endl;
        }
    }
    else if(x%360 == 180){
        for(int i = r;i>=1;i--){
            for(int j = c;j>=1;j--){
                cout << g[i][j];
            }
            cout << endl;
        }
    }
    else if(x%360 == 270){
        for(int j = c;j>=1;j--){
            for(int i = 1;i<=r;i++){
                cout << g[i][j];
            }
            cout << endl;
        }
    }

    int rr = r+c-1;
    int cc = r+c-1;
    for(int i = 1;i<=rr;i++){
        for(int j = 1;j<=cc;j++){
            g2[i][j] = ' ';
        }
    }
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            g2[i+j-1][r-i+j] = g[i][j];
        }
    }
    
    
    x-=45;
    if(x < 0) x+=365;

    if(x%360 == 0){
        for(int i = 1;i<=rr;i++){
            for(int j = 1;j<=cc;j++){
                cout << g2[i][j];
            }
            cout << endl;
        }
    }
    else if(x%360 == 90){
        for(int j = 1;j<=cc;j++){
            for(int i = rr;i>=1;i--){
                cout << g2[i][j];
            }
            cout << endl;
        }
    }
    else if(x%360 == 180){
        for(int i = rr;i>=1;i--){
            for(int j = cc;j>=1;j--){
                cout << g2[i][j];
            }
            cout << endl;
        }
    }
    else if(x%360 == 270){
        for(int j = cc;j>=1;j--){
            for(int i = 1;i<=rr;i++){
                cout << g2[i][j];
            }
            cout << endl;
        }
    }
    


}