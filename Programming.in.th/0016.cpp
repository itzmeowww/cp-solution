#include <bits/stdc++.h>
using namespace std;
int main(){

    string a = "ABC";
    int sa = 0;
    string b = "BABC";
    int sb = 0;
    string c = "CCAABB";
    int sc = 0;
    int ans = 0;
    int n;
    string str;
    cin >> n;
    cin >> str;

    for(int i = 0;i<n;i++){
        if(str[i] == a[i%3]) sa++;
        if(str[i] == b[i%4]) sb++;
        if(str[i] == c[i%6]) sc++;
     }
    ans = max(sa,max(sb,sc));
    cout << ans << endl;
    if(sa == ans) cout << "Adrian" << endl;
    if(sb == ans) cout << "Bruno" << endl;
    if(sc == ans) cout << "Goran" << endl;


}