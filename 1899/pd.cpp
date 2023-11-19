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
		//for(int x:li) cout<<x<<' ';
		int tmp=0, tpc=1;
		for(int i=1; i<n; i++){
			if(li[i]==li[i-1]){
				tpc++;
			}else{
				tmp+=tpc*(tpc-1)/2;
				tpc=1;
			}
		}
		tmp+=(tpc-1)*tpc/2;
		int oc=0, tc=0;
		for(int i=0; i<n; i++){
			if(li[i]==1) oc++;
			else if(li[i]==2) tc++;
			else break;
		}cout<<tmp+oc*tc<<'\n';
	}
}
