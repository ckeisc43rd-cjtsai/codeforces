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
	int n, q;cin>>n>>q;
	string op;cin>>op;
	map<pii, vector<int>> mp;
	int cx=0, cy=0;
	pii tps;tps.ff=0;tps.ss=0;
	mp[tps].pb(-1);
	vector<int> sx(n+1), sy(n+1);
	sx[0]=0;sy[0]=0;
	for(int i=0; i<n; i++){
		if(op[i]=='U') cy++;
		else if(op[i]=='D') cy--;
		else if(op[i]=='L') cx--;
		else cx++;
		pii tmp;tmp.ff=cx;tmp.ss=cy;
		mp[tmp].pb(i+1);
		sx[i+1]=cx;sy[i+1]=cy;
	}
	for(int i=0; i<q; i++){
		int l, r, x, y;cin>>x>>y>>l>>r;
		pii tmp;tmp.ff=x;tmp.ss=y;
		//int fi=mp[tmp];
		bool ccc=false;
		for(int fi:mp[tmp])if((fi<l||fi>r)){cout<<"YES\n";ccc=true;break;}
		if(!ccc){
			pii tpp;tpp.ff=y-sy[l-1]+sx[l-1];tpp.ss=x-sx[l-1]+sy[l-1];
			//int se=mp[tpp];
			for(int se:mp[tpp]) if((se<=r&&se>=l)) {cout<<"YES\n";ccc=true;break;}
			//else cout<<"NO\n";
		}
		if(!ccc) cout<<"NO\n";
	}
}

