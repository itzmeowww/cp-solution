#include <bits/stdc++.h>
using namespace std;
stack<char>st;
int main(){
    int n;
    cin >> n;
    char c;
    while(n--){
        cin >> c;
        if(st.empty()) st.push(c);
        else{
            if(st.top() == c){
                st.pop();
            }
            else st.push(c);
        }
    }
    cout << st.size() << endl;
    if(st.size() == 0){
        cout << "empty";
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }


}