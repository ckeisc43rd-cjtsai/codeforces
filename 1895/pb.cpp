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
		vector<int> li(2*n);
		for(int i=0; i<2*n; i++) cin>>li[i];
		sort(li.begin(), li.end());
		int cnt=0;
		for(int i=1; i<n; i++){
			cnt+=(li[i]-li[i-1])+(li[n+i]-li[n+i-1]);
		}
		cout<<cnt<<'\n';
		for(int i=0; i<n; i++){
			cout<<li[i]<<' '<<li[i+n]<<'\n';
		}
	}

}
