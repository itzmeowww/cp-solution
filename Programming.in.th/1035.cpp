#include <bits/stdc++.h>
using namespace std;

int isPal(string str,int a,int b){
    if(a == b) return 1;
    if(b-a == 1){
        if(str[a] == str[b]) return 1;
        else return 0;
    } 
    if(str[a] != str[b]) return 0;
    return isPal(str,a+1,b-1);
}

string int2str(int x){
    string str;
    while(x){
        str.push_back(x%10 + '0');
        x/=10;
    }
    reverse(str.begin(),str.end());
    return str;
}

bool np[2000005];

int main(){

    for(int i = 2;i<=2e6;i++){
        if(np[i]) continue;
        for(int j = 2;j<=(2e6)/i;j++){
            np[i*j] = true;
        }
    }
    int n;
    cin >> n;
    while(1){
        // cout << n << endl;
        if(np[n] == 0){
            string str = int2str(n);
            if(isPal(str,0,str.size()-1)){
                cout << n;
                return 0;
            }
        }
        n++;
    }

}