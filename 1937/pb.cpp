#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
#define pb push_back
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string a, b;cin>>a>>b;
		string ans;ans+=a[0];
		int side=0;
		int tmp=1;
		int st=n-1;
		for(int i=0; i<n-1; i++){
			if(side==0){
				if(a[i+1]==b[i]) {
					ans+=a[i+1];
					tmp*=2;
				}
				else if(b[i]=='0'){
					ans+='0';
					side=1;
					st=i;	
				}
				else{
					ans+=a[i+1];
					tmp=1;
				}
			}else{
				ans+=b[i];
			}
		}
		int cnt=1;
		if(ans.size()==n)ans+=b[n-1];
		for(int i=st; i-1>=0; i--){
			if(b[i-1]==a[i]) cnt++;
			else break;
		}
		cout<<ans<<'\n'<<cnt<<'\n';
	}
}
