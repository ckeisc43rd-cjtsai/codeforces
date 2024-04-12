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
		string a, b;cin>>a>>b;
		int sz=a.size();
		char ar[sz], br[sz];
		int det=-1;
		for(int i=0; i<sz; i++){
			if(a[i]==b[i]){
				ar[i]=a[i];br[i]=b[i];
			}else if(det==-1){
				if(a[i]>b[i]){
					det=1;
					ar[i]=a[i];br[i]=b[i];
				}else{
					det=0;
					ar[i]=a[i];br[i]=b[i];
				}
			}else if(det==0){
				ar[i]=max(a[i], b[i]);
				br[i]=min(a[i], b[i]);
			}else{
				br[i]=max(a[i], b[i]);
				ar[i]=min(a[i], b[i]);
			}
		}
		for(auto x:ar) cout<<x;
		cout<<'\n';
		for(auto x:br) cout<<x;
		cout<<'\n';
	} 
}
