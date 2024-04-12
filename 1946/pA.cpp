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
		for(int i=0; i<n; i++)cin>>li[i];
		sort(li.begin(), li.end());
		int mid=li[(n+1)/2];
		int ans=1;
		for(int i=(n-1)/2;i<n-1; i++){
			if(li[i]==li[i+1]) ans++;
			else break;
		}
		cout<<ans<<'\n';
	}
}
