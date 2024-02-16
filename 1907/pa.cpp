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
		char a;int n;cin>>a>>n;
		for(int i=1; i<=8; i++){
			if(i==n) continue;
			cout<<a<<i<<'\n';
		}for(int i=0; i<8; i++){
			char t='a'+i;
			if(a==t) continue;
			cout<<t<<n<<'\n';
		}
	}
}
