#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

void update(int ind, vector<int> &lazy, vector<int> &tr, vector<vector<int>> &kid){
	int cnt=lazy[ind];
	for(int x:kid[ind]){
		//tr[x]+=lazy[ind];
		lazy[x]+=lazy[ind];
		update(x, lazy, tr, kid);
	}tr[ind]=lazy[ind];
	//return tr[ind]=tr[ind]+cnt;
}


signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int q;cin>>q;
		vector<int> tr(q+1, 0);
		vector<vector<int>> kid(q+1);
		vector<int> lazy(q+1, 0);
		int cnt=1;
		while(q--){
			int det;cin>>det;
			if(det==1){
				int a;cin>>a;
				update(a, lazy, tr, kid);
				kid[a].push_back(cnt+1);
				cnt++;
			}else{
				int a, b;cin>>a>>b;
				lazy[a]+=b;
			}
		}update(1, lazy, tr, kid);
		for(int i=1; i<=cnt; i++) cout<<tr[i]<<' ';
		cout<<'\n';
	}
}
