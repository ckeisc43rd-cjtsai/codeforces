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
		string s;cin>>s;
		bool fin=false;
		for(int i=1; i<=n&&!fin; i++){
			if(n%i) continue;
			//front
			int rc=0;
			for(int j=i; j<n; j++){
				if(s[j]!=s[(j)%i])rc++;
			}
			int wc=0;
			if(rc>1){
				for(int j=n-i-1; j>=0; j--){
					int coo=n-(n-j)%i;
					if(coo==n) coo-=i;
					if(s[j]!=s[coo]) wc++;
				}
			}
			if(rc<=1||wc<=1){
				cout<<i<<'\n';
				fin=true;
			}
		}
	}
}
