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
		int n, m;cin>>n>>m;
		vector<int> a(n), b(n);
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++) cin>>b[i];
		for(int i=m; i<n; i++){
			b[i]=min(b[i], a[i]);
		}
		int mini=INT64_MAX;
		int cnt=0;
		for(int i=m-1; i>=0; i--){
			mini=min(mini, cnt+a[i]);
			cnt+=b[i];
		}
		for(int i=m; i<n; i++) mini+=b[i];
		cout<<mini<<'\n';
	}
}
