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
		char a;
		bool b=false;
		for(int i=0; i<n; i++){
			cin>>a;
			if(a=='0') b=true;
		}if(b) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
