#include<bits/stdc++.h>
using namespace std;
int const N=4000010,H=1000010;
vector<pair<int,int>> v[N];
long long fw[H];
void upd(int idx,int val){
	for(int i=idx;i<=H;i+=(i & -i)) fw[i]+=val;
}
long long fi(int idx){
	long long ret = 0;
	for(int i=idx;i>=1;i-=(i & -i)) ret += fw[i];
	return ret;
}
int main(){
	
	int n,t,c = 0,f = 0;
    long long ans = 0;
	
    scanf(" %d %d",&n,&t);
	
	for(int i=0;i<n;i++){
		int s,h,w,o;
        scanf(" %d %d %d %d",&s,&h,&w,&o);
	
		v[s].push_back({h,o});
		v[s+w].push_back({h,-o});
	}
	for(int i=1;i<=4000001;i++){
		if(v[i].empty()) continue;
		for(auto ii : v[i]){
			upd(ii.first,ii.second);
		}
		int l=1, r=H, mid, x;
		while(l!=r){
			mid = (l+r)/2;
			x = fi(mid);
			if(x>t) r=mid;
			else l=mid+1;
		}
		int s=l;
		r=H;
		while(l!=r){
			mid = (l+r)/2;
			x = fi(mid);
			if(x >= t) r=mid;
			else l=mid+1;
		}
		int e=l;
		ans += (i-f)*c;
		c = e-s;
		f = i;
	}
	printf("%lld",ans);
}