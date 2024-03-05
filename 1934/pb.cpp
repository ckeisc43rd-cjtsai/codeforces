#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

const int cool[31]={
	0, 
	1, 2, 1, 2, 3,
	1, 2, 3, 2, 1,
	2, 2, 2, 3, 1,
	2, 3, 2, 3, 2,
	2, 3, 3, 3, 2,
	3, 3, 3, 4, 0
};

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	vector<int> dp(1000020, INT32_MAX);
	dp[0]=0;
	for(int i=0; i<1000000; i++){
		dp[i+1]=min(dp[i]+1, dp[i+1]);
		dp[i+3]=min(dp[i]+1, dp[i+3]);
		dp[i+6]=min(dp[i]+1, dp[i+6]);
		dp[i+10]=min(dp[i]+1, dp[i+10]);
		dp[i+15]=min(dp[i]+1, dp[i+15]);
	}
	while(t--){
		int n;cin>>n;
		int ans=(n/900000)*60000;
		n=n%900000;
		cout<<ans+dp[n]<<'\n';
	}
}
