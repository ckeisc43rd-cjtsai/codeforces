#include <bits/stdc++.h>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		string x;cin>>x;
		int tmp=0, ans=0;
		for(int i=0; i<x.size(); i++){
			if(x[i]=='A') tmp++;
			else{
				ans+=tmp;
				tmp=0;
			}
		}int tmp2=0, ans2=0;
		for(int i=x.size()-1; i>=0; i--){
			if(x[i]=='A') tmp2++;
			else{
				ans2+=tmp2;
				tmp2=0;
			}
		}
		cout<<max(ans, ans2)<<'\n';
	}
}
