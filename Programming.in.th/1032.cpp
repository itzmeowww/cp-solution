#include <bits/stdc++.h>
using namespace std;
int data[111][11][11];

int match(int a,int b){
    for(int i = 1;i<=9;i++){
        for(int j = 1;j<=9;j++){
            if(data[a][i][j] != data[b][i][j] && data[a][i][j] != 0 && data[b][i][j] !=0){
                return 0;
            }
        }   
    }
    return 1;
}

int check1(int r,int c,int a){
    int cou[11] = {0};
    for(int i = r;i<= r+2;i++){
        for(int j = c;j <= c + 2;j++){
            if(++cou[data[a][i][j]] > 1){
                return 0;
            }
        }
    }
    return 1;
}

int check2(int x,int a){
    int cou[11] = {0};
    for(int i = 1;i<= 9;i++){
        if(++cou[data[a][i][x]] > 1){
            return 0;
        }
    }
    return 1;
}

int check3(int x,int a){
    int cou[11] = {0};
    for(int i = 1;i<= 9;i++){
        if(++cou[data[a][x][i]] > 1){
            return 0;
        }
    }
    return 1;
}

int checkAll(int a){
    for(int i = 1;i<=9;i++){
        if(!check3(i,a)) return 0;
        if(!check2(i,a)) return 0;
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(!check1(i*3+1,j*3+1,a)) return 0;
        }
    }
    if(!(match(0,a))) return 0;

    return 1;
}

int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=9;i++){
        for(int j = 1;j<=9;j++){
            cin >> data[0][i][j];
        }   
    }
    for(int k = 1;k<=n;k++){
        for(int i = 1;i<=9;i++){
           for(int j = 1;j<=9;j++){
                cin >> data[k][i][j];
            }   
        }
        if(checkAll(k)) cout << k << endl;
 
    }
    cout << "END";
    


}