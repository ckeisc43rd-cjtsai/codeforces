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
		int n;cin>>n;
		bool has=false;
		int neg=0;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			if(a<0) neg++;
			if(a==0) has=true;
		}
		if(has) cout<<0<<'\n';
		else if(neg%2==1){
			cout<<0<<'\n'
	cout<<ans;

		}
		else{
			cout<<1<<'\n'<<1<<' '<<0<<'\n';
		}
	}
}
