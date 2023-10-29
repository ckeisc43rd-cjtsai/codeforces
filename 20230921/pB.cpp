#include <bits/stdc++.h>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> li(n);
		int mini=INT32_MAX, ind;
		for(int j=0; j<n; j++){
			cin>>li[j];
			if(li[j]<mini) {
				mini=li[j];
				ind=j;
			}
		}
		int ans=1;
		for(int i=0; i<n;i++){
			if(i==ind){
				ans*=(li[i]+1);
			}else{
				ans*=li[i];
			}
		}cout<<ans<<'\n';
	}
}
