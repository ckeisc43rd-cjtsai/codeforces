#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, x;
vector<int> li(200007);

bool check(int h){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(h>li[i]){
			cnt+=(h-li[i]);
		}
	}
	return cnt<=x;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0; i<n; i++) cin>>li[i];
		int l=1, r=10000000007;
		while(l!=r-1){
			int mid=(l+r)/2;
			if(check(mid)){
				l=mid;
			}else{
				r=mid;
			}
		}cout<<l<<'\n';
	}
}
