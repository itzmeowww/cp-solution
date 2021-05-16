#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.resize(30);
    char op,c,d;
    int x;
    while(1){
        cin >> op;
        if(op == '!') break;
        if(op == '#'){
            cin >> c;
            cout << v[c - 'A'] << endl;
        }
        else if(op == '='){
            cin >> c;
            cin >> x;
            v[c - 'A'] = x;
        }
        else if(op == '-'){
            cin >> c;
            cin >> d;
            v[c - 'A'] = v[c-'A'] - v[d-'A'];
        }
        else if(op == '+'){
            cin >> c;
            cin >> d;
            v[c - 'A'] = v[c-'A'] + v[d-'A'];
        }
        else if(op == '*'){
            cin >> c;
            cin >> d;
            v[c - 'A'] = v[c-'A'] * v[d-'A'];
        }
        else if(op == '/'){
            cin >> c;
            cin >> d;
            v[c - 'A'] = v[c-'A'] / v[d-'A'];
        }
    }
    cout << "!";

}