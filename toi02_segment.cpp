#include <bits/stdc++.h>
using namespace std;
int main(){
    string A[4],B[4],x;
    vector<int>va,vb;
    int a,b;
    char c;
    cin >> a >> b;
    getline(cin,x);
    for(int i = 0;i<3;i++) getline(cin,A[i]);
    //for(int i = 0;i<3;i++) cout <<""<< A[i] << endl;
    for(int i = 0;i<3;i++) getline(cin,B[i]);
    //for(int i = 0;i<3;i++) cout <<""<< B[i] << endl;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<4*a;j++){
            if(A[i][j] != '|' && A[i][j] != '_' ) A[i][j] = ' ';
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4*b;j++){
            if(B[i][j] != '|' && B[i][j] != '_' ) B[i][j] = ' ';
        }
    }

    for(int i = 0;i<4*a;i+=4){
        if(A[0][i+1] == ' ' && A[1][i] == ' ' && A[1][i+1] == ' ' && A[1][i+2] == '|' && A[2][i] ==  ' ' && A[2][i+1] == ' ' && A[2][i+2] == '|'){
            va.push_back(1);
        }
        else if(A[0][i+1] == '_' && A[1][i] == ' ' && A[1][i+1] == '_' && A[1][i+2] == '|' && A[2][i] ==  '|' && A[2][i+1] == '_' && A[2][i+2] == ' '){
            va.push_back(2);
        }
        else if(A[0][i+1] == '_' && A[1][i] == ' ' && A[1][i+1] == '_' && A[1][i+2] == '|' && A[2][i] ==  ' ' && A[2][i+1] == '_' && A[2][i+2] == '|'){
            va.push_back(3);
        }
        else if(A[0][i+1] == ' ' && A[1][i] == '|' && A[1][i+1] == '_' && A[1][i+2] == '|' && A[2][i] ==  ' ' && A[2][i+1] == ' ' && A[2][i+2] == '|'){
            va.push_back(4);
        }
        else if(A[0][i+1] == '_' && A[1][i] == '|' && A[1][i+1] == '_' && A[1][i+2] == ' ' && A[2][i] ==  ' ' && A[2][i+1] == '_' && A[2][i+2] == '|'){
            va.push_back(5);
        }
        else if(A[0][i+1] == '_' && A[1][i] == '|' && A[1][i+1] == '_' && A[1][i+2] == ' ' && A[2][i] ==  '|' && A[2][i+1] == '_' && A[2][i+2] == '|'){
            va.push_back(6);
        }
        else if(A[0][i+1] == '_' && A[1][i] == ' ' && A[1][i+1] == ' ' && A[1][i+2] == '|' && A[2][i] ==  ' ' && A[2][i+1] == ' ' && A[2][i+2] == '|'){
            va.push_back(7);
        }
        else if(A[0][i+1] == '_' && A[1][i] == '|' && A[1][i+1] == '_' && A[1][i+2] == '|' && A[2][i] ==  '|' && A[2][i+1] == '_' && A[2][i+2] == '|'){
            va.push_back(8);
        }
        else if(A[0][i+1] == '_' && A[1][i] == '|' && A[1][i+1] == '_' && A[1][i+2] == '|' && A[2][i] ==  ' ' && A[2][i+1] == '_' && A[2][i+2] == '|'){
            va.push_back(9);
        }
        else if(A[0][i+1] == '_' && A[1][i] == '|' && A[1][i+1] == ' ' && A[1][i+2] == '|' && A[2][i] ==  '|' && A[2][i+1] == '_' && A[2][i+2] == '|'){
            va.push_back(0);
        }

    }
    for(int i = 0;i<4*b;i+=4){
        if(B[0][i+1] == ' ' && B[1][i] == ' ' && B[1][i+1] == ' ' && B[1][i+2] == '|' && B[2][i] ==  ' ' && B[2][i+1] == ' ' && B[2][i+2] == '|'){
            vb.push_back(1);
        }
        else if(B[0][i+1] == '_' && B[1][i] == ' ' && B[1][i+1] == '_' && B[1][i+2] == '|' && B[2][i] ==  '|' && B[2][i+1] == '_' && B[2][i+2] == ' '){
            vb.push_back(2);
        }
        else if(B[0][i+1] == '_' && B[1][i] == ' ' && B[1][i+1] == '_' && B[1][i+2] == '|' && B[2][i] ==  ' ' && B[2][i+1] == '_' && B[2][i+2] == '|'){
            vb.push_back(3);
        }
        else if(B[0][i+1] == ' ' && B[1][i] == '|' && B[1][i+1] == '_' && B[1][i+2] == '|' && B[2][i] ==  ' ' && B[2][i+1] == ' ' && B[2][i+2] == '|'){
            vb.push_back(4);
        }
        else if(B[0][i+1] == '_' && B[1][i] == '|' && B[1][i+1] == '_' && B[1][i+2] == ' ' && B[2][i] ==  ' ' && B[2][i+1] == '_' && B[2][i+2] == '|'){
            vb.push_back(5);
        }
        else if(B[0][i+1] == '_' && B[1][i] == '|' && B[1][i+1] == '_' && B[1][i+2] == ' ' && B[2][i] ==  '|' && B[2][i+1] == '_' && B[2][i+2] == '|'){
            vb.push_back(6);
        }
        else if(B[0][i+1] == '_' && B[1][i] == ' ' && B[1][i+1] == ' ' && B[1][i+2] == '|' && B[2][i] ==  ' ' && B[2][i+1] == ' ' && B[2][i+2] == '|'){
            vb.push_back(7);
        }
        else if(B[0][i+1] == '_' && B[1][i] == '|' && B[1][i+1] == '_' && B[1][i+2] == '|' && B[2][i] ==  '|' && B[2][i+1] == '_' && B[2][i+2] == '|'){
            vb.push_back(8);
        }
        else if(B[0][i+1] == '_' && B[1][i] == '|' && B[1][i+1] == '_' && B[1][i+2] == '|' && B[2][i] ==  ' ' && B[2][i+1] == '_' && B[2][i+2] == '|'){
            vb.push_back(9);
        }
        else if(B[0][i+1] == '_' && B[1][i] == '|' && B[1][i+1] == ' ' && B[1][i+2] == '|' && B[2][i] ==  '|' && B[2][i+1] == '_' && B[2][i+2] == '|'){
            vb.push_back(0);
        }
        else vb.push_back(-1);
    }
    int to = max(a,b)+1;
    reverse(va.begin(),va.end());
    reverse(vb.begin(),vb.end());
    va.push_back(0);
    vb.push_back(0);
    while(va.size() < to) va.push_back(0);
    while(vb.size() < to) vb.push_back(0);
    for(int i = 0;i<to-1;i++){
        va[i] += vb[i];
        if(va[i] >= 10){
            va[i+1]++;
            va[i] -= 10;
        }
    }
    int fn = 0;
    reverse(va.begin(),va.end());
    for(int i = 0;i<to;i++){
        if(fn || va[i]!=0){
            fn = 1;
            printf("%d",va[i]);
        }
    }

}
