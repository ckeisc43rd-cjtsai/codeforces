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
		int sum=0;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			sum+=abs(a);
		}cout<<sum<<'\n';
	}
}
