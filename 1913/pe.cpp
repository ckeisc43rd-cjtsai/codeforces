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
	int n, m;cin>>n>>m;
	vector<vector<int>> mat(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>mat[i][j];
		}
	}
	vector<int> need(n);
	vector<int> meed(m);
	int cntn=0, cntm=0;
	for(int i=0; i<n; i++){
		cin>>need[i];
		cntn+=need[i];
	}
	for(int i=0; i<m; i++){
		cin>>meed[i];
		cntm+=meed[i];
	}
	if(cntn!=cntm){
		cout<<-1;
		return 0;
	}

}
