#include <bits/stdc++.h>
using namespace std;
map<int,string>ans;
int main(){
    ans[0] = "Sunday";
    ans[1] = "Monday";
    ans[2] = "Tuesday";
    ans[3] = "Wednesday";
    ans[4] = "Thursday";
    ans[5] = "Friday";
    ans[6] = "Saturday";
    int d,m;
    scanf(" %d %d",&d,&m);
    m -= 2;
    int y = 9;
    if(m <= 0){
        m+= 12;
        y--;
    }
    int f = d + (13*m-1)/5 + y + y/4 + 20/4 - 2*20;
    f = (f%7+7)%7;

    cout << ans[f];

}