#include <bits/stdc++.h>
using namespace std;
vector<string>v;
int main(){
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    do{
        v.push_back(str);
    }while(next_permutation(str.begin(),str.end()));
    cout << v.size() << endl;
    for(auto vv : v){
        cout << vv << endl;
    }


}