#include <bits/stdc++.h>
using namespace std;
int arr[105][20];
int arr2[105][20];
int main(){

    int t;
    cin >> t;
    int n,m;
    int k;
    string str;
    while(t--){
        memset(arr,0,sizeof arr);
        memset(arr2,0,sizeof arr2);
        cin >> n >> m;
        for(int i = 1;i<=n;i++){
            cin >> k;
            for(int j = 1;j<=k;j++){
                cin >> str;

                if(str[0] == '-'){
                    arr[i][str[1] - 'a']--;
                }   
                else{
                    arr[i][str[1] - 'a']++;
                }
                // cout << endl;
                // for(int jj = 'a'-'a';jj<='p'-'a';jj++){
                //     cout << arr[jj] << " ";
                // }
                // cout << endl;
            }
            
            
        }
        for(int i = 1;i<=m;i++){
            cin >> k;
            for(int j = 1;j<=k;j++){
                cin >> str;
                // cout << str[0] << endl;
                if(str[0] == '-'){
                    // cout << "WOW" << endl;
                    arr2[i][str[1] - 'a']--;
                }   
                else{
                    arr2[i][str[1] - 'a']++;
                }
                // cout << endl;
                // for(int jj = 'a'-'a';jj<='p'-'a';jj++){
                //     cout << arr2[jj] << " ";
                // }
                // cout << endl;
            }
        }
        // cout << endl;
        // for(int ii = 1;ii<=n;ii++){
        //     for(int jj = 'a'-'a';jj<='p'-'a';jj++){
        //         cout << arr[ii][jj] << " ";
        //     }
        //     cout << endl;
        // }
        
        // cout << endl;


        int t1 =-1,t2=-1,cur=-1,now;
        int no = 0;
        for(int i = 0;i<(1<<16);i++){
            t1 = -1;
            t2 = -1;
            for(int j = 1;j<=n;j++){
                cur = -1;
                for(int k = 0;k < 16;k++){
                    if((i & (1<<k)) == (1<<k)){
                        now = 1;
                    }
                    else{
                        now = 0;
                    }

                    if(arr[j][k] == 0){
                        continue;
                    }
                    else if(arr[j][k] < 0){
                       now = !now;
                    }
                    if(cur == -1) cur = now;
                    else cur = (cur || now);
                }
                if(t1 == -1) t1 = cur;
                else t1 = (t1 && cur);
                if(t1 == 0) break;
            }

            for(int j = 1;j<=m;j++){
                cur = -1;
                for(int k = 0;k < 16;k++){
                    if((i & (1<<k)) == (1<<k)){
                        now = 1;
                    }
                    else{
                        now = 0;
                    }

                    if(arr2[j][k] == 0){
                        continue;
                    }
                    else if(arr2[j][k] < 0){
                        // cout << "wow" << endl;
                       now = !now;
                    }

                    
                    if(cur == -1) cur = now;
                    else cur = (cur || now);

                    // cout << cur << ", " << j << " " << now << endl;
                }
                if(t2 == -1) t2 = cur;
                else t2 = (t2 && cur);

                if(t2 == 0) break;
            }

            if(!(!t1 || t2)){
                no = 1;
                // cout << t1 << " " << t2 << " " << i << endl;
                break;
            }

           
        }
        
        if(no) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

}
/*
2
3 1
2 -a +b
2 -b +c
1 -c
1 -a
1 1
1 +b
1 -a
*/