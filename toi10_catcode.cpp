#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,int>hav;
string str,check;
set<int>s;
int add[100100];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i = 1;i<=n;i++){
        cin >> str;
        long long sum = 0;
        for(int j = 0;j < m;j++){
            sum += ((str[j] - '0') * (1 << j));
        }
        // cout << sum << endl;
        hav[sum] = i;
    }
    int si;
    int q;
    cin >> q;
    for(int i = 1;i<=q;i++){
        s.clear();
        int can = 0;
        long long sum = 0;
        cin >> si >> check;
    
        for(int j = 0;j<si;j++){
            if(j > m-1){
                sum = (sum >> 1);
                sum += (check[j] - '0') * (1 << (m-1));
            }
            else{
                sum += (check[j] - '0') * (1 << j);
            }
            if(j >= m-1){
                if(hav[sum] != 0){
                    s.insert(hav[sum]);
                }
            }
        }
        if(s.empty()) cout << "OK" << endl;
        else{
            for(auto xx : s){
                cout << xx << " ";
            }
            cout << endl;
        }

    }
}