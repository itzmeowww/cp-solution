#include <bits/stdc++.h>
using namespace std;
string str;
bool check(int s,int e){
    // cout << s << " - " << e  << endl;
    if(s == e) return true;
    if(str[s] >= 'A' && str[s] <= 'Z') str[s] = (str[s] - 'A' + 'a');
    if(str[e] >= 'A' && str[e] <= 'Z') str[e] = (str[e] - 'A' + 'a'); 

    if(s == e-1 && str[s] == str[e]) return true;
    if(str[s] == str[e]){
        return check(s+1,e-1);
    }
    else return false;
}
int main(){
    cin >> str;
    int si = str.size();
    
    if(check(0,si-1)){
        
        if( (si%2 == 1 && check(0,si/2) && check(si/2,si-1)) || (check(0,(si/2)-1) && check((si+1)/2,si-1))){
            cout << "Double Palindrome";
        }
        else{
            cout << "Palindrome";
        }
    }
    else{
        cout << "No";
    }
}