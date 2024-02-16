#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
vector<int> pa;
vector<int> ac;
vector<vector<int>> adj;
vector<int> fn;
multiset<int> st;
void dfs(int root){
	for(int x:adj[root]){
		if(x!=pa[root]){
			dfs(x);
			st.insert(x);
		}
	}

}
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		pa.resize(n, 0);
		ac.resize(n);
		adj.resize(n);
		fn.resize(n, 0);
		for(int i=1;i<n; i++){
			cin>>pa[i];
			pa[i].push_back(i);
		}
		vector<int> ac(n);
		for(int i=0;i<n; i++)cin>>ac[i];

	}
}
