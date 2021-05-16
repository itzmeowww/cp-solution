#include <bits/stdc++.h>
using namespace std;

struct DATA{
    int l,h,r;
    bool operator < (const DATA & d2) const {
        return l < d2.l;
    }
};

vector<DATA>v;
stack<DATA>st;

int main(){

    int n;
    cin >> n;
    int l,h,r;
    for(int i = 1;i<=n;i++){
        cin >> l >> h >> r;
        v.push_back({l,h,r});
    }
    sort(v.begin(),v.end());
    for(auto x : v){
        cout << "x : " << x.l << " " << x.h << " " << x.r << endl;
        // if(st.empty()){
        //     st.push({x.l,x.h,x.r});
        // }
        // else{
        //     if(st.top().h > x.h){
        //         if(st.top().r >= x.l) st.push({st.top().r,x.h,x.r});
        //         else st.push({x.l,x.h,x.r});
        //     }
        //     else if(st.top().h == x.h){
        //             DATA top = st.top();
        //             st.pop();
        //             st.push({top.l,top.h,max(x.r,top.r)});
        //     }
        //     else{
        //         DATA top = st.top();
        //         st.pop();
                
        //         DATA a,b;
        //         a = top;
        //         b = top;
        //         a.l = min()
        //         st.push({top.l,top.h,x.l});
        //         st.push({x.l,x.h,top.r});

        //         if(st.top().r >= x.l){
                    
        //         }
        //         else st.push({x.l,x.h,x.r});
        //     }
        // }

        // cout << ": " << st.top().l << " " << st.top().h << " " << st.top().r << endl;
        // cout << endl;
    }

    // while(!st.empty()){
    //     DATA top = st.top();
    //     st.pop();
    //     cout << top.l << " " << top.h << " " << top.r << endl;
    // }
}