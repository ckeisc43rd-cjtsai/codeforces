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
		int n, x, y;cin>>n>>x>>y;
		vector<int> li(x+1, -100);
		for(int i=1; i<=x; i++) cin>>li[i];
		int ans=0;
		sort(li.begin(), li.end());
		li.push_back(li[1]+n);
		vector<int> cu, cu2;
		int fo=0;
		for(int i=2; i<=x+1; i++){
			if(li[i]-li[i-1]==1) continue;
			if(li[i]-li[i-1]==2) ans+=1;
			else if((li[i]-li[i-1])%2)cu.push_back(li[i]-li[i-1]);
			else cu2.push_back(li[i]-li[i-1]);
		}//ans=min(ans, n-2);

		sort(cu2.begin(), cu2.end());
		for(int z:cu2){
			if(y>=(z-2)/2){
				ans+=z-1;
				y-=(z-2)/2;
			}else{
				ans+=y*2;
				y=0;
			}
			if(y<=0) break;
		}
		if(y>0){
			sort(cu.begin(), cu.end());
			for(int z:cu){
				if(y>=(z-1)/2){
					ans+=(z-1)/2*2;
					y-=(z-1)/2;
				}else{
					ans+=y*2;
					y=0;
				}
				if(y<=0) break;
			}

		}
		cout<<x-2+ans<<'\n';
	}
}
