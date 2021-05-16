#include <bits/stdc++.h>
using namespace std;

set<string>s;

int main(){
    int n;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        s.insert(str);
    }
    for(auto ss : s){
        cout << ss << endl;
    }

}