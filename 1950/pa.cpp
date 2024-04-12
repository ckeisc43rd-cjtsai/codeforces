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
		int a, b, c;cin>>a>>b>>c;
		if(b>a&&c>b) cout<<"STAIR\n";
		else if(b>a&&b>c) cout<<"PEAK\n";
		else cout<<"NONE\n";
	}
}
