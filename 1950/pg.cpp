#include <bits/stdc++.h>
#define pii pair<int, int>
#define ff first
#define ss second
using namespace std;
vector<int> vis;
vector<pii> li;
vector<vector<int>> adj;
int n;
int maxi=0;
int cnt=0;
void dfs(int now){
	maxi=max(maxi, cnt);
	for(int x:adj[now]){
		int i=x;
		if(i==now) continue;
		if(vis[i]) continue;
			vis[i]=true;
			cnt++;
			dfs(i);
			cnt--;
			//vis[i]=false;
	}
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		maxi=0;
		cin>>n;
		vis.clear();
		li.clear();
		li.resize(n);
		adj.clear();
		adj.resize(n);
		vis.resize(n, 0);
		map<string, int> g, s;
		int incg=1, incs=1;
		for(int i=0; i<n; i++){
			string a, b;cin>>a>>b;
			if(g[a]) li[i].ff=g[a];
			else{
				g[a]=incg;incg++;
				li[i].ff=g[a];
			}
			if(s[b]) li[i].ss=s[b];
			else{
				s[b]=incs;incs++;
				li[i].ss=s[b];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(li[i].ff==li[j].ff||li[i].ss==li[j].ss){
					adj[i].push_back(j);
					adj[j].push_back(i);
				}
			}
		}

		for(int i=0; i<n; i++){
			cnt=1;
			vis[i]=true;
			dfs(i);
			vis[i]=false;
		}
			cout<<n-maxi<<'\n';

	}
}
