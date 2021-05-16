#include <bits/stdc++.h>
using namespace std;
stack<char>st;
int main(){
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        for(auto x : str){
            if(st.empty()) st.push(x);
            else{
                if(st.top() == '(' && x == ')') st.pop();
                else if(st.top() == '[' && x == ']') st.pop();
                else if(st.top() == '{' && x == '}') st.pop();
                else st.push(x);
            }
        }
        cout << (st.empty()?"yes":"no") << endl;
        while(!st.empty()) st.pop();
    }
}