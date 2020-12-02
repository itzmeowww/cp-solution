#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,a,b,c;
    vector<int>v;
    for(int i = 0;i<3;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    string str;
    cin >> str;
    for(int i = 0;i<str.size();i++){
        cout << v[str[i] - 'A'] << " ";
    }

} 