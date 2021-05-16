#include <bits/stdc++.h>
using namespace std;
stack<char>st;
int main(){
    string str;
    cin >> str;
    for(auto x:str){
        if(st.empty()){
            st.push(x);
        }
        else{
            if(x == ')'){
                if(st.top() == '('){
                    st.pop();
                }
                else st.push(x);
            }
            else{
                st.push(x);
            }
        }
    }
    cout << st.size();
}