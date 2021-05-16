#include <bits/stdc++.h>
using namespace std;
string str;
map<char,int>vowel;
int main(){
    vowel['a'] = 1;
    vowel['e'] = 1;
    vowel['i'] = 1;
    vowel['o'] = 1;
    vowel['u'] = 1;

    getline(cin,str);
    for(int i = 1;i < str.size();i++){
        if(str[i] == 'p' && str[i-1] == str[i+1] && vowel[str[i-1]] == 1){
            str[i] = '*';
            str[i+1] = '*';
        }
    }
    for(int i = 0;i < str.size();i++){
        if(str[i] != '*') printf("%c",str[i]);
    }
    
    


}