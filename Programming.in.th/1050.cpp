#include <bits/stdc++.h>
using namespace std;
vector<int>v[100100];
int main(){

    int n,p,x;
    cin >> n >> p;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<p;j++){
            cin >> x;
            v[i].push_back(x);
        }
        v[i].push_back(i+1);
    }
    sort(v,v+n);
    // for(int i = 0;i<=n;i++){
    //     for(int j = 0;j<=p;j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    for(int j = 0;j<n;j++){
        int no = 0;
        for(int i = 0;i<p;i++){
            if(v[j][i] != v[n][i]){ 
                no = 1;
                break;
            }
        }
        if(no == 0){
            cout << v[j][p];
            return 0;
        }
    }
    int l = 0,r = n-1;
    while(l < r){

        
        int no;
       
        if(v[l][0] + v[r][0] > v[n][0]){
            r--;
        }
        else if(v[l][0] + v[r][0] == v[n][0]){

            
            int k = 0;
            int ans = -1;
            while(1){
                no = 0;
                for(int i = 0;i<p;i++){
                    if(v[l][i] + v[r - k][i] != v[n][i]){
                        no = 1;
                        break;
                    }
                }
                if(no == 0 && r-k != l){
                    ans = r-k;
                }

                if(r-k-1>=0 && v[r-k][0] == v[r-k-1][0]) k++;
                else break;
            }
            if(ans!=-1){
                cout << min(v[l][p],v[ans][p]) << " " << max(v[l][p],v[ans][p]);
                return 0;
            }
            
            l++;

            
            
        }
        else{
            l++;
        }

    }
    
    
    cout << "NO";
    



}