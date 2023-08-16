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
		int a, b, c, d;cin>>a>>b>>c>>d;
		int tmp=a%b;
		int cnt=max(tmp-c, (int)0);
		c-=tmp;
		int tpp=a/b;
		tpp-=d;
		if(!cnt) tpp-=(c/b);
		if(tpp<0) tpp=0;
		cout<<max((int)0, tpp+cnt)<<'\n';
	}
}
