#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

int ti(char a){
	return a-'a';
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string a;cin>>a;
	int la=a.size();
	vector<vector<int> > adj(700);
	vector<int> hash(la);
	for(int i=1; i<la; i++){
		adj[ti(a[i-1])+ti(a[i])*26].push_back(i);
		hash[i]=ti(a[i-1])+ti(a[i])*26;
	}
	vector< vector<int> > d(700, vector<int>(700, 1e9 + 225));
	for (int i = 0; i < 700; i++) d[i][i] = 0;
	for(int i=1; i<la-1; i++) d[hash[i]][hash[i+1]]=1, d[hash[i+1]][hash[i]]=1;
	for(int i=2; i<la; i++) d[hash[i]][hash[i-1]]=1, d[hash[i-1]][hash[i]]=1;
	for (int k = 0; k < 700; k++) {
    	for (int i = 0; i < 700; i++) {
        	for (int j = 0; j < 700; j++) {
            	d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        	}
    	}
	}
	int q;cin>>q;
	while(q--){
		int a, b;cin>>a>>b;
		cout<<d[hash[a]][hash[b]]<<'\n';
	}



}
