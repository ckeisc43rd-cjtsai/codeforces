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
		int n;cin>>n;
		vector<int> pre(n+1, 0);
		for(int i=1; i<=n; i++) {
			cin>>pre[i];
			pre[i]+=pre[i-1];
		}
		int ans=0;
		for(int i=1; i<=n; i++){
			if(n%i)continue;
			int maxi=INT64_MIN, mini=INT64_MAX;
			for(int j=i; j<=n; j+=i){
				int cur=pre[j]-pre[j-i];
				maxi=max(maxi, cur);
				mini=min(mini, cur);
			}ans=max(ans, maxi-mini);
		}
		cout<<ans<<'\n';
	}
}
