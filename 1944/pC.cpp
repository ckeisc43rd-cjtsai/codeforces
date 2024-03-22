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
		vector<int> li(n+1, 0);
		for(int i=0; i<n; i++){
			int a;cin>>a;
			li[a]++;
		}
		int maxi=n+1;
		int ans=-1;
		for(int i=0; i<n; i++){	
			maxi=min(maxi, li[i]+i-1);
			if(maxi>=i){
				ans=i;
			}
		}
		if(ans<0) cout<<0<<'\n';
		for(int i=ans; i>=0; i--){
			if(li[i]) {cout<<i+1<<'\n';break;}
		}
	}
}
