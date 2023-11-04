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
		int x, y, k;cin>>x>>y>>k;
		if(y<x) cout<<x<<'\n';
		else if(x+k>=y){
			cout<<y<<'\n';
		}else{
			cout<<x+k+2*(y-x-k)<<'\n';
		}
	}
}
