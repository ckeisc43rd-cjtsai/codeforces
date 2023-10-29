#include <bits/stdc++.h>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		string a;cin>>a;
		if(a=="bac"||a=="acb"||a=="cba"||a=="abc"){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
	}
}
