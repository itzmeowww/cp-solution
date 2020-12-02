#include <bits/stdc++.h>
using namespace std;
int ball[4];
int main(){
    ball[1] = 1;
    string str;
    cin >> str;
    for(int i = 0;i<str.size();i++){
        if(str[i] == 'A'){
            swap(ball[1],ball[2]);
        }
        else if(str[i] == 'B'){
            swap(ball[3],ball[2]);
        }
        else{
            swap(ball[1],ball[3]);
        }
    }
    for(int i = 1;i<=3;i++){
        if(ball[i]) cout  << i;
    }
}