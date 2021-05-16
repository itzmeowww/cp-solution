#include <bits/stdc++.h>
using namespace std;

priority_queue<int>pq;
int main(){

    int n,x;
    cin >> n;
    char op;
    for(int i = 1;i<=n;i++){
        cin >> op;
        if(op == 'P'){
            cin >> x;
            pq.push(x);
        }
        else{
            if(pq.empty()){
                cout << "-1" << endl;
            }
            else{
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }


}