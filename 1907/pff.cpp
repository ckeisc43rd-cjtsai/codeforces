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
		vector<int> li(3*n);
		int mind, maxd;
		int bind=-1, baxd=-1;
		int mini=INT32_MAX, maxi=INT32_MIN;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			li[i]=a;li[i+n]=a;li[i+n+n]=a;
			if(a<mini){
				mind=i;
				mini=a;
				bind=-1;
			}else if(a==mini){
				bind=i;
			}
			if(a>maxi){
				maxd=i;
				maxi=a;
				baxd=-1;
			}else if(a==maxi){
				baxd=i;
			}
		}
		int cnt=0;
		int act=-1;
		for(int i=0; i<2*n; i++){
			if(li[i]<=li[i+1]){
				cnt++;
			}else cnt=0;
			if(cnt==n-1){
				act=i+1-n;
				break;
			}
		}
		int ans=(act!=-1)?(n-act)%n:INT32_MAX;
		act=-1;cnt=0;
		for(int i=2*n-1; i; i--){
			if(li[i]<=li[i-1]){
				cnt++;
			}else cnt=0;
			if(cnt==n-1){
				act=n-i+1;
				//cout<<act;
				break;
			}
		}
		ans=min(ans,(act!=-1)?((act+1)%n):INT32_MAX);
		if(ans==INT32_MAX){
			cout<<-1<<'\n';
		}else cout<<ans<<'\n';
	}
}
