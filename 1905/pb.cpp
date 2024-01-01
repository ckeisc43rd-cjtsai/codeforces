#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> nds(n+1, 0);
		for(int i=0; i<n-1; i++){
			int a, b;cin>>a>>b;
			nds[a]++;nds[b]++;
		}
		int cnt=0;
		for(int i=1; i<=n; i++){
			if(nds[i]==1) cnt++;
		}
		cout<<(cnt+1)/2<<'\n';
	}

}
