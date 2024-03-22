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
		string a;cin>>a;
		int on=0, ze=0;
		vector<int> pr(n+1, 0), en(n+1, 0);
		for(int i=1; i<=n; i++){
			if(a[i-1]=='0'){
				ze++;
				pr[i]=pr[i-1]+1;
			}else{
					pr[i]=pr[i-1];
			}
		}
		on=n-ze;
		vector<pii> ans;
		for(int i=0; i<=n; i++){
			int l=i, r=n-i;
			int cool =pr[i], c2=on-(i-pr[i]);
			if((cool>=(l+1)/2)&&(c2>=(r+1)/2)){
				ans.push_back({abs(n-i*2), i});

			}
		}
		sort(ans.begin(), ans.end());
		cout<<ans[0].ss<<'\n';

	}
}
