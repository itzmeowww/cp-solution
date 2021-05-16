#include <bits/stdc++.h>
using namespace std;
char mid(char a,char b,char c){
    if(a >= min(b,c) && a <= max(b,c)) return a;
    if(b >= min(a,c) && b <= max(a,c)) return b;
    if(c >= min(b,a) && c <= max(b,a)) return c;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l,k;
    string a,b,str;
    cin >> l >> k;
    cin >> a >> b >> str;
    for(int i = 0;i<k;i++){
        for(int j = 0;j<l;j++){
            str[i] = mid(str[i],a[j],b[j]);
        }
    }
    cout << str;

}
