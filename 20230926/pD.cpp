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
		int n, k;cin>>n>>k;
		string s;cin>>s;
		int safd;
		vector<int> li(k+1);
		for(int i=0; i<k; i++) cin>>li[i];
		for(int i=0; i<k; i++) cin>>safd;
		int q;cin>>q;
		for(int i=0; i<q; i++) {
			int tmp;cin>>tmp;
			int l=0,r=k+1;
			int ans;
			while(r-l!=1){
				int mid=(r+l)/2;
				if(li[mid]>=tmp&&li[mid+1]<tmp){
					ans=mid;
					break;
				}else if(li[mid]<tmp){
					l=mid;
				}else{
					r=mid;
				}
			}
			cout<<min(tmp, li[l]+li[l+1]-1-tmp)<<' ';
			cout<<max(tmp, li[l]+li[l+1]-1-tmp)<<' ';
		}
	}
}
