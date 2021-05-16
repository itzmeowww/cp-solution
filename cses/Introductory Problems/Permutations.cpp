#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1) cout << n;
    else if (n <= 3) cout << "NO SOLUTION";
    else if (n == 4) cout << "2 4 1 3";
    else {
        int mid = (n+1)/2;
        for(int i = 1;i<=mid;i++){
            cout << i << " ";
            if(i + mid <= n) cout << i + mid << " ";
        }
    }
}