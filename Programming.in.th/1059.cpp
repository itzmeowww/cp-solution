#include <bits/stdc++.h>
using namespace std;

pair<int,int>loc;
pair<int,int>pos[10];
int main(){
    string ans;
    string str[10];
    int g[4][4] = {{},{0,1,2,3},{0,4,5,6},{0,7,8,9}};    
    str[2] = "ABC";
    str[3] = "DEF";
    str[4] = "GHI";
    str[5] = "JKL";
    str[6] = "MNO";
    str[7] = "PQRS";
    str[8] = "TUV";
    str[9] = "WXYZ";
    pos[1] = {1,1};
    pos[2] = {1,2};
    pos[3] = {1,3};
    pos[4] = {2,1};
    pos[5] = {2,2};
    pos[6] = {2,3};
    pos[7] = {3,1};
    pos[8] = {3,2};
    pos[9] = {3,3};

    int n;
    cin >> n;
    int skip = 1;
    int at,x;

    cin >> at >> x;

    while(n--){
        int a,b;
        if(!skip){
            cin >> a >> b >> x;
            loc.first += b;
            loc.second += a;
            at = g[loc.first][loc.second];
        }
        else{
            skip = 0;
            loc = pos[at];
        }
        
        
        // cout << ": " << loc.first << " " << loc.second << endl;
        
        // cout << at << endl;
        if(at == 1){
            while(x-- && !ans.empty()) ans.pop_back();
        }
        else{
            int idx = x%str[at].size();
            idx--;
            if(idx<0) idx += str[at].size();
            ans.push_back(str[at][idx]);
        }
    }

    if(ans == "") cout << "null";
    else cout << ans;

}