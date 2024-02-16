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
		int k, x, a;cin>>k>>x>>a;
		//if(x>40) cout<<"NO\n";
		
			int sum=1;
			bool suc=true;
			for(int i=0; i<x; i++){
				int tmp=(sum)/(k-1)+1;
				sum+=tmp;
				if(sum>(int)(1e10)) {
					suc=false;
					break;
				}
			}//cout<<sum;
			if(!suc){
				cout<<"NO\n";
			}
			else if(a>=sum) cout<<"YES\n";
			else cout<<"NO\n";
		
	}
}
