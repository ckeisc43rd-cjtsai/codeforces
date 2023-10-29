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
		int mini=INT32_MAX, mini2=INT32_MAX;
		int cnt=0;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			if(a<mini){
				mini=a;
				//mini2=INT32_MAX;
			}else if(a>mini&&a<mini2){
				cnt++;
				mini2=a;
			}
		}cout<<cnt<<'\n';
	}
}
