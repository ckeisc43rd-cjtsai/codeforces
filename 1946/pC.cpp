#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

vector<int> kid;
vector<vector<int>> adj;
vector<int> pa;
vector<int> kd;
void dfs(int now, int par){
	for(int x:adj[now]){
		if(x==par) continue;
		dfs(x, now);
		int cool =x;
		pa[cool]=now;
		kid[now]+=kid[x];
		kd[now]++;
	}
}


signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, k;cin>>n>>k;
		adj.clear();
		kd.clear();
		pa.clear();
		kid.clear();
		adj.resize(n+1);
		pa.resize(n+1);
		kid.resize(n+1, 1);
		kd.resize(n+1, 0);
		for(int i=1; i<n; i++){
			int a, b;cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		dfs(1, 0);
		int l=0, r=n;
		while(r>l){
			int mid=(l+r+1)/2;
			int cnt=0;
			stack<int> st;
			st.push(1);
			vector<int> tps(n+1, 1);
			queue<int> q;
			for(int i=1; i<=n; i++) if(kid[i]==1) q.push(i);
			vector<int> kid2(n+1);
			for(int i=1; i<=n; i++){
				kid2[i]=kd[i];
			}
			while(!q.empty()){
				int tmp=q.front();q.pop();
				if(tps[tmp]>=mid){

				cnt++;}
				else tps[pa[tmp]]+=tps[tmp];
				kid2[pa[tmp]]--;
				if(kid2[pa[tmp]]==0) q.push(pa[tmp]);
			}
			//for(int i=1; i<=n; i++) cout<<tps[i]<<' ';
			//	cout<<' ';''''
			if(cnt<=k) r=mid-1;
			else l=mid;
		}cout<<r<<'\n';
	}
}
