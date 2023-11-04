#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

int fp(int x, int p){
	if(p==0) return 1;
	if(p==1) return x;
	int d=fp(x, p/2);
	if(p%2) return d*d*x;
	else return d*d;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		bool det=true;
		int n;cin>>n;
		int maxi=INT32_MIN;
		for(int i=1; i<=n; i++){
			int c=__lg(i);
//			cout<<i<<' '<<c<<' ';
			int e;cin>>e;
			if(i<=2){
//				cout<<'e';
				maxi=e;
			}else if(i-1==fp(2, c)){
				maxi=e;
			}else if(e<maxi){
				det=false;
			}else{
				maxi=max(e, maxi);
			}//cout<<det<<' ';
		}if(det) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
