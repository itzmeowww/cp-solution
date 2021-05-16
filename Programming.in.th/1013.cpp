#include <bits/stdc++.h>
using namespace std;

string num2str(int x){
    string str;
    str.push_back(x+'0');
    return str;
}
string op(vector <int> v){
    string str;
    reverse(v.begin(),v.end());

    for (int i = 0;i<v.size();i++){
        str += "op(" + num2str(v[i]) + ",";
    }

    str += "p";

    for(int i = 0;i<v.size();i++){
        str += ")";
    }
    str += "=";
    return str;
}

int solve(string str,vector<int>v){
    queue<char>q;
}

int main(){

    string str;
    cin >> str;
    int q;
    cin >> q;
    while(q--){
        vector<int>v;
        int x;
        while(1){
            cin >> x;
            if(x == 0) break;
            v.push_back(x);
        }
        cout << op(v) << endl;

    }

}