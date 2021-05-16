#include <bits/stdc++.h>
using namespace std;
string str;
int main(){

    cin >> str;
    string line1,line2,line3;

    line1 = ".";
    line2 = ".";
    line3 = "#";
    
    for(int i = 0;i < str.size();i++){
        char x = str[i];
        if((i+1)%3==0){
            line1 += ".*..";
            line2 += "*.*.";
            line3.pop_back();
            line3.push_back('*');
            line3 += ".";
            line3.push_back(x);
            line3 += ".*";
        }
        else{
            line1 += ".#..";
            line2 += "#.#.";
            
            line3 += ".";
            line3.push_back(x);
            line3 += ".#";
        }
    }

    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << line2 << endl;
    cout << line1 << endl;


}