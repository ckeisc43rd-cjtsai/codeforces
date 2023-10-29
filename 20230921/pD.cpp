#include <bits/stdc++.h>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, k;cin>>n>>k;
		vector<char> li(n);
		for(int i=0; i<n; i++){
			cin>>li[i];
		}
		int cnt=0;
		for(int i=0; i<n; i++){
			if(li[i]=='B'){
				cnt++;
				i+=(k-1);
			}
		}
		cout<<cnt<<'\n';
	}
}
