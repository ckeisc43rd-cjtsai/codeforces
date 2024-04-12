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
		int cnt=0;int mini=2*n;
		for(int i=1; i<n; i++){
			if(li[i]!=li[i-1]){

				if(li[i-1]==li[0])mini=min(mini, cnt+1);
				cnt=0;
			}
			else{
				cnt++;
			}
		}
		if(cnt!=n-1) mini=min(cnt+1, mini);
		if(mini==2*n) cout<<"-1\n";
		else cout<<mini<<'\n';
	}
}
