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
		int w, f;cin>>w>>f;
		int n;cin>>n;
		vector<int> st(n);
		int cnt=0;
		for(int i=0; i<n; i++) {
			cin>>st[i];
			cnt+=st[i];
		}
		int div=(cnt-1)/(w+f)+1;
		div=div*min(w, f);
		vector<int> dp(div+1, 0);
		//for(int i=0; i<n; i++){
		//	dp[st[i]]=1;
		//}
		dp[0]=1;
		for(int i=0; i<n; i++){
			for(int j=div; j>st[i]&&j-st[i]>=0; j--){
				dp[j]=dp[j-st[i]]&1;
			}
			st[i]=1;
		}
	}



}
