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
		int a;cin>>a;
		if(a%2==0){
		int s;
		for(int i=0; i<a; i++) cin>>s;
			cout<<2<<'\n';
			cout<<1<<' '<<a<<'\n';
			cout<<1<<' '<<a<<'\n';
		}else{
			int s;
			for(int i=0; i<a; i++) cin>>s;
			cout<<4<<'\n';
			cout<<1<<' '<<2<<'\n';
			cout<<1<<' '<<2<<'\n';
			cout<<2<<' '<<a<<'\n';
			cout<<2<<' '<<a<<'\n';
		}
	}
}
