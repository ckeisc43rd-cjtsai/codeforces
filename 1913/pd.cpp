#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define modd 998244353

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> dp(n+1);
		dp[0]=1;
		stack<pii> st;
		int b;cin>>b;
		st.push({b, 0});
		int mini=1;
		int minus=0;
		int sum=0;
		for(int i=1; i<n; i++){
			int a;cin>>a;
			while((!st.empty())&&a<st.top().ff){
				sum-=dp[st.top().ss];
				sum=(sum+modd)%modd;
				st.pop();
			}
			if(!st.empty())dp[i]=(dp[i-1]-dp[st.top().ss]+sum)%modd;
			else {
				dp[i]=(dp[i-1]+1)%modd;
			}
			st.push({a, i});
		}cout<<dp[n-1]%modd<<'\n';
	}

}

