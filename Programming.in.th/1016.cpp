#include <bits/stdc++.h>
using namespace std;
int str2num(string str){

    reverse(str.begin(),str.end());
    int ten=1;
    int ret=0;
    for(int i = 0;i<str.size();i++){
        ret += ten*(str[i]-'0');
        ten*=10;
    }
    return ret;
}
int main(){
    double v = 0.70710678118;
    map<string,double>xx,yy;
    double x=0,y=0;
    xx["E"] = 1;
    xx["W"] = -1;

    yy["N"] = 1;
    yy["S"] = -1;

    xx["NE"] = v;
    yy["NE"] = v;

    xx["SE"] = v;
    yy["SE"] = -v;

    xx["NW"] = -v;
    yy["NW"] = v;

    xx["SW"] = -v;
    yy["SW"] = -v;

    string op;
    while(1){

        cin >> op;
        if(op[0] == '*') break;
        string num,c;
        if(op[op.size()-2] >= 'A'){
            num = op.substr(0,op.size()-2);
            c = op.substr(op.size()-2,2);
        }
        else{
            //cout << op << endl;
            num = op.substr(0,op.size()-1);
            c = op.substr(op.size()-1,1);
        }

        int k = str2num(num);
        //cout << num << endl;
        //cout << c << " " << k << endl;
        x+=xx[c]*k;
        y+=yy[c]*k;
    }
    printf("%.3f %.3f\n%.3f",x,y,sqrt(x*x+y*y));
}
