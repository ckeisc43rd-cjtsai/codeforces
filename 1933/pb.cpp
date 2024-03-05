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
		int a=0, b=0, c=0;
		for(int i=0; i<n; i++){
			int d;cin>>d;
			if(d%3==0) a++;
			else if(d%3==1) b++;
			else c++;
		}
		int e=(b+c+c)%3;
		if(e==2) cout<<1;
		else if(e==1&&b==0) cout<<2;
		else if(e==1) cout<<1;
		else cout<<0;
		cout<<'\n';
	}
}
