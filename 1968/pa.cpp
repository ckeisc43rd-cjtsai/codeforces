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
		int maxi=0, ind;
		for(int i=n-1; i>=0; i--){
			int cool=i+__gcd(i, n);
			if(cool>maxi){
				maxi=cool;ind=i;
			}
			if(i*2<maxi) break;
		}
		cout<<ind<<'\n';
	}
}
