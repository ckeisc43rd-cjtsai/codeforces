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
		int tmp=600;
		cout<<tmp<<' ';
		for(int i=0; i<n-1; i++){
			int a;cin>>a;
			cout<<tmp+a<<' ';
			tmp+=a;
		}cout<<'\n';
	}
}
