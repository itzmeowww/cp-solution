#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans = 1,cou = 1;
    string str;
    cin >> str;
    for(int i = 1;i<str.size();i++){
        if(str[i] == str[i-1]){
            cou++;
            ans = max(ans,cou);
        }       
        else{
            cou = 1;
        }
    }
    cout << ans;
}