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
		vector<int> li(2*n);
		int mini=INT32_MAX, ind, idd=-1;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			li[i]=a;li[i+n]=a;
			if(a<mini){
				ind=i;
				mini=a;
				idd=ind;
			}else if(a==mini) idd=i;
		}
		int cnt=0;int id=INT32_MAX;
		for(int i=ind; i<ind+n; i++){
			if(li[i]<li[i+1]) cnt++;
			else cnt=0;
			if(cnt==n-1) id=i;
		}
		bool det=true;
		if(id==INT32_MAX) det=false;
		int ans1=id+1-n;
		id=INT32_MAX;
		for(int i=idd+n; i>idd; i--){
			if(li[i]<li[i-1]) cnt++;
			else cnt=0;
			if(cnt==n-1) id=i;
		}
		if(id!=INT32_MAX) det=true;
		int ans2=n-id;
		if(det)cout<<min(ans1, ans2)<<'\n';
		else cout<<"-1\n";
	}
}
