#include <bits/stdc++.h>
using namespace std;

int dice[6] = {1,2,3,5,4,6};

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    string m;
    scanf(" %d",&n);
    while(n--){
        dice[0] = 1;
        dice[1] = 2;
        dice[2] = 3;
        dice[3] = 5;
        dice[4] = 4;
        dice[5] = 6;
        cin >> m;
        for(int i = 0;i<m.size();i++){
            if(m[i] == 'F'){
                char temp = dice[0];
                dice[0] = dice[3];
                dice[3] = dice[5];
                dice[5] = dice[1];
                dice[1] = temp;
            }
            if(m[i] == 'B'){
                char temp = dice[0];
                dice[0] = dice[1];
                dice[1] = dice[5];
                dice[5] = dice[3];
                dice[3] = temp;
            }

            if(m[i] == 'L'){
                char temp = dice[0];
                dice[0] = dice[4];
                dice[4] = dice[5];
                dice[5] = dice[2];
                dice[2] = temp;
            }

            if(m[i] == 'R'){
                char temp = dice[0];
                dice[0] = dice[2];
                dice[2] = dice[5];
                dice[5] = dice[4];
                dice[4] = temp;
            }

            if(m[i] == 'C'){
                char temp = dice[1];
                dice[1] = dice[4];
                dice[4] = dice[3];
                dice[3] = dice[2];
                dice[2] = temp;
            }

            if(m[i] == 'D'){
                char temp = dice[1];
                dice[1] = dice[2];
                dice[2] = dice[3];
                dice[3] = dice[4];
                dice[4] = temp;
            }

        }

        //for(int i = 0;i<=5;i++) printf("%d ",dice[i]);

    printf("%d ",dice[1]);
    }


}
