#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back

using namespace std;

signed main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string b;cin>>b;
		int cnt=0;
		for(int i=0; i<(n/2); i++){
			if(b[i]!=b[n-i-1]) cnt++;
		}
		vector<int> ans;
		for(int i=0; i<=(n/2); i++){
			if((i-cnt)>=0){
				if((i-cnt)%2==0){
					ans.pb(1);
				}else if((i-cnt)%2==1&&n%2){
					ans.pb(1);
				}else{
					ans.pb(0);
				}
			}else{

				ans.pb(0);
			}
		}
		for(int i=0; i<ans.size()-1; i++) cout<<ans[i];
		if(n%2) cout<<ans[ans.size()-1];
		for(int i=ans.size()-1; i>=0; i--) cout<<ans[i];
		cout<<'\n';
	}
}
