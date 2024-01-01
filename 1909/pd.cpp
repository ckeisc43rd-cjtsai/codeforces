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
		int n, k;cin>>n>>k;
		vector<int> li(n);
		for(int i=0; i<n; i++){
			cin>>li[i];
			li[i]-=k;
		}
		bool same=true;
		for(int i=1; i<n; i++){
			if(li[i]!=li[i-1]){
				same=false;
				break;
			}
		}
		if(same){
			cout<<0<<'\n';
			continue;
		}
		bool fail=false;
		for(int i=0; i<n; i++){
			if(li[i]<=0){
				fail=true;
				break;
			}
		}
		if(fail){
			cout<<-1<<'\n';
			continue;
		}
		int sss=li[0];
		for(int i=1; i<n; i++){
			sss=gcd(sss, li[i]);
		}
		int ans=0;
		for(int i=0; i<n; i++){
			ans+=li[i]/sss-1;
		}
		cout<<ans<<'\n';
	}
}
