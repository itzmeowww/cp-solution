#include <bits/stdc++.h>
using namespace std;

int cou[200];
int main(){
    string str;
    cin >> str;
    for(auto c : str){
        cou[c]++;
    }
    int odd = 0;
    for(int i = 'A';i<='Z';i++){
        if(cou[i] % 2 == 1) odd++;
    }
    if(odd > 1){
        cout << "NO SOLUTION";
    }
    else{
        for(int i = 'A';i<='Z';i++){
            if(cou[i]%2==1) continue;
            for(int j = 1;j<=cou[i]/2;j++){
                cout << (char)i;
            }
        }
        for(int i = 'A';i<='Z';i++){
            if(cou[i]%2==0) continue;
            for(int j = 1;j<=cou[i];j++){
                cout << (char)i;
            }
        }
        for(int i = 'Z';i>='A';i--){
            if(cou[i]%2==1) continue;
            for(int j = 1;j<=cou[i]/2;j++){
                cout << (char)i;
            }
        }
    }

}