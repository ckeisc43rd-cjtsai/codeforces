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
		vector<int> li(x);
		for(int i=0; i<x; i++) cin>>li[i];
		sort(li.begin(), li.end());
		pii f, la;
		int ans=0;
		for(int i=0, r=x-1; i<=r; i++, r--){
			if(r==i){
				la.ff=li[r-1], la.ss=li[r];
			}else if(r==i+1){
				if(li[i]-li[i-1]==1) ans++;
				la.ff=li[i], la.ss=li[r];
			}else if(r==x-1){	
				if(li[r]-li[r-1]==1) ans++;
			}else{
				if(li[i]-li[i-1]==1) ans++;
				if(li[r]-li[r-1]==1) ans++;
			}
		}

		if((li[0]+n-li[x-1])%n==2) ans++;

		if((la.ss-la.ff)%n==2) ans++;
		pii la2;
		int ans2=0;
		for(int i=0, r=x-1; i<=r; i++, r--){
			if(r==i){
				la2.ff=li[r], la2.ss=li[r+1];
			}else if(r==i+1){
				if(li[r+1]-li[r]==1) ans2++;
				la2.ff=li[i], la2.ss=li[r];
			}else if(i==0){	
				if(li[i+1]-li[i]==1) ans2++;
			}else{
				if(li[i+1]-li[i]==1) ans2++;
				if(li[r+1]-li[r]==1) ans2++;
			}
		}
		if((la2.ss-la2.ff)%n==2) ans2++;
		if((li[0]+n-li[x-1])%n==2) ans2++;
		int cool=0;
		//for(int i=1; i<x-1; i++) if(li[i]-li[i-1]==2) cool +=2;
		cout<<max(ans, ans2)+cool<<'\n';
	}
}
