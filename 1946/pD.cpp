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
		int n, x;cin>>n;
		vector<vector<int>> li(n+1, vector<int>(31));
		vector<int> val(n+1);
		for(int i=0; i<=n; i++){
			int a;cin>>a;
			val[i]=a;
			for(int j=0; j<=30; j++){
				li[i][j]=a&1;
				a>>=1;
			}
		}
		x=val[0];
		int maxi=-1;
		for(int i=30; i>=0; i--){
			if(li[0][i]){
				int cnt=1;
				int tmp=0;
				for(int j=1; j<=n; j++){
					tmp^=val[j];
					bool can=true;
					for(int k=30; k>i; k--) if(((tmp>>k)&1)&&!((x>>k)&1)) can=false;
					if(can&&!((tmp>>i)&1)){
						cnt++;
						tmp=0;
						if(j==n) maxi=max(maxi, cnt+1);
					}
				}
			}
		}
		cout<<maxi<<'\n';
	}
}
