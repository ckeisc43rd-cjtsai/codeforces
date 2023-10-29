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
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		sort(li.begin(), li.end());
		int a=li[0], b=li[n-1];
		bool det=true;
		if(n%2){
		for(int i=0; i<(n-1)/2; i++) if(li[i]!=a) det=false;
		for(int i=(n-1)/2+1; i<n; i++) if(li[i]!=b) det=false;
		if(li[n/2]!=a&&li[n/2]!=b) det=false;
		}else{
			for(int i=0; i<=(n-1)/2; i++) if(li[i]!=a) det=false;
			for(int i=(n-1)/2+1; i<n; i++) if(li[i]!=b) det=false;
		}
		if(det) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
