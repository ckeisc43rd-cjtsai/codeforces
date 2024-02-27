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
		vector<int> li(2*n);
		int ans=0;
		for(int i=0; i<2*n; i++) cin>>li[i];
		sort(li.begin(), li.end());
		for(int i=0; i<2*n; i+=2) ans+=li[i];
		cout<<ans<<'\n';
	}
}
