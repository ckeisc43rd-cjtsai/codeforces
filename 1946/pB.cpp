#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
const int modd= 1e9+7;
const int big=modd*10000000;
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	vector<int> pw(200007);
	pw[0]=1;pw[1]=2;
	for(int i=2; i<200005; i++) pw[i]=(pw[i-1]*2)%modd;
	while(t--){
		int n, k;cin>>n>>k;
		vector<int> li(n+1), dp(n+1, INT64_MIN);
		dp[0]=0;
		int sum=0;
		int maxi=INT64_MIN;
		for(int i=1; i<=n; i++){
			cin>>li[i];sum+=li[i];
			dp[i]=max(0ll, dp[i-1])+li[i];
			maxi=max(maxi, dp[i]);
		}
		if(maxi>0){
			int ans=((maxi)%modd)*pw[k]%modd;
			ans=ans+sum-maxi;
			ans=(ans+big)%modd;
			cout<<ans<<'\n';
		}else{
			cout<<(sum+big)%modd<<'\n';
		}
		
	}
}
