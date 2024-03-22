#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, x;cin>>n>>x;
		vector<int> li(n+1);
		vector<int> ind(n+1);
		for(int i=1; i<=n; i++) {
			cin>>li[i];
			ind[li[i]]=i;
		}
		int l=1, r=n+1;
		int re;
		vector<int> used(n+1, 0);
		while(r-l!=1){
			//cout<<l<<' '<<r<<'\n';
			int m=(l+r)/2;
			used[m]=1;
			if(li[m]<=x) {
				re=l;
				l=m;
			}
			else {
				re=r;
				r=m;
			}
		}
		//if(used[x]){
		//continue;
		//}
		if(li[l]==x) cout<<0<<'\n';
		else{
			cout<<1<<'\n';
			cout<<ind[x]<<' '<<l<<'\n';
		}
	}
}
