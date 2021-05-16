#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf(" %d",&n);
    string str;
    for(int i = 1;i <=n;i++){
        cin >> str;
         if(str == "2" || (str.back()-'0')%2 == 1){
            cout << "T" << endl;
        }
        else{
            cout << "F" << endl;
        }     
    }
   

}