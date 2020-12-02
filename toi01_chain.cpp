#include <bits/stdc++.h>
using namespace std;
int main(){
    string word,x;
    int si,n;
    cin >> si >> n;
    cin >> word;
    n--;
    while(n--){
        cin >> x;
        int cou = 0;
        for(int i = 0;i<si;i++){
            if(word[i] != x[i]){
                cou++;
            }
        }
        if(cou > 2) break;
        else word = x;
    }
    cout << word;
}