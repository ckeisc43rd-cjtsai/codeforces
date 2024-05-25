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
		int n, q;cin>>n>>q;
		vector<int> pre(n+1, 0);
		for(int i=1; i<=n; i++){
			int a;cin>>a;
			pre[i]=pre[i-1]^a;
		}
		vector<pii> cool(n+1);
		vector<int> nxt(n+12, n+10);
		vector<int> pp(n+12, n+10);
		for(int i=0; i<=n; i++){
			cool[i]={
				pre[i], i
			};
		}
		sort(cool.begin(), cool.end());
		for(int i=0; i<n; i++){
			if(cool[i].ff==cool[i+1].ff){
				nxt[cool[i].ss]=cool[i+1].ss;
				pp[cool[i+1].ss]=cool[i].ss;
			}
		}
		for(int x:nxt) cout<<x<<' ';
		//for(pii x:cool) cout<<x.ff<<' '<<x.ss<<'\n';
		cout<<'\n';
		for(int _=0; _<q; _++){
			int a, b;cin>>a>>b;
			if((pre[b]^pre[a-1])==0) cout<<"YES1\n";
			else{
				if(nxt[nxt[a-1]]<b||(pre[pre[b]]>a&&pre[pre[b]]<n+1)) cout<<"YES2\n";
				else cout<<"NO\n";
			}
		}
		cout<<"\n";
	}
}
