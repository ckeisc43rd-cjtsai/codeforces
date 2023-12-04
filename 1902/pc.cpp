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
		int n;cin>>n;
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		sort(li.begin(), li.end(), greater<int>());
		int zz=li[0]-li[1];
		for(int i=1; i<n-1; i++){
			zz=__gcd(zz, li[i]-li[i+1]);
		}
		int ins=li[n-1]-zz;
		for(int i=0; i<n-1; i++){
			if(li[i]-li[i+1]>zz) {ins=li[i]-zz;break;}
		}
		int op=0;
		for(int i=0; i<n; i++) op+=(li[0]-li[i])/zz;
		op+=(li[0]-ins)/zz;
		cout<<op<<'\n';
	}
}
