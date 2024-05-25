#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;cin>>n;
	cout<<"{d:";
	for(int i=1; i<n; i++){
		if((i-1)%15==0){
			if(i!=1) cout<<",";
			cout<<"{d:";
		}
		cout<<i;
		if((i-1)%15==14){
			cout<<"}";
		}else cout<<",";
	}
	if((n-1)%15!=14);
	cout<<n<<"}}";
	
}
