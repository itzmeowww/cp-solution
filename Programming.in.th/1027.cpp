#include <bits/stdc++.h>
using namespace std;
map<char,int>cou;

struct DATA{
    int first;
    char second;

    bool operator < (const DATA & d2) const {
        if(d2.first == first) return second < d2.second;
        return first > d2.first;
    }
};

int main(){

    string str;
    map<char,int>no;
    vector<DATA>v;
    while(1){
        
        cin >> str;
        if(str == "!"){
            break;
        }
        v.clear();
        for (auto x : str){
            cou[x]++;
        }
        
        for(char x = 'A';x<='G';x++){
            if(!no[x]) v.push_back({cou[x],x});
        }
        sort(v.begin(),v.end());
        // reverse(v.begin(),v.end());

        if(v.size() == 1) continue;
        else if(v[v.size()-1].first == v[v.size()-2].first){
            continue;
        }
        else{
            no[v.back().second] = 1;
            v.pop_back();
        }
    }
   
    cout << v.size() << endl;
    for(auto x : v){
        cout << x.second << " " << x.first  << endl;
    }
    


}