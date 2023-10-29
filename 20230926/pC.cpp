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
		int n, k, x;cin>>n>>k>>x;
		int tmp=(k)*(k+1)/2;
		if(x>=tmp&&x<=(tmp+(n-k)*k)) cout<<"yes\n";
		else cout<<"no\n";
	}
}
