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
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if((i+j+1)%2) cout<<"##";
				else cout<<"..";
			}cout<<'\n';
			for(int j=0; j<n; j++){
				if((i+j+1)%2) cout<<"##";
				else cout<<"..";
			}cout<<'\n';

		}
	}
}
