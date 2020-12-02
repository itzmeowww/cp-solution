#include <bits/stdc++.h>
using namespace std;
string ans[8] = {"A","B+","B","C+","C","D+","D","F"};
int ran[8] = {80,75,70,65,60,55,50,0};
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    for(int i = 0;i<8;i++){
        if(a+b+c >= ran[i]){
            cout << ans[i];
            return 0;
        }
    }
}