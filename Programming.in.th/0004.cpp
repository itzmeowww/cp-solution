#include <bits/stdc++.h>
using namespace std;
int main(){
    int s=0,c=0;
    string str;
    cin >> str;
    for(auto x : str){
        if(x >= 'a' && x <= 'z'){
            s++;
            if(c !=0 ){
                cout << "Mix";
                return 0;
            }
        }
        else if(x >= 'A' && x <= 'Z'){
            c++;
            if(s !=0 ){
                cout << "Mix";
                return 0;
            }
        }
    }
    if(c == 0) cout << "All Small Letter";
    if(s == 0) cout << "All Capital Letter";
}