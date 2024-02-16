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
		vector<int> li(2*n);
		int mind, maxd;
		int bind=-1, baxd=-1;
		int mini=INT32_MAX, maxi=INT32_MIN;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			li[i]=a;li[i+n]=a;
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
		int op=INT32_MAX;
		bool can=true;
		for(int i=mind+1; i<mind+n; i++){
			if(li[i]<li[i-1]){
				can=false;
				break;
			}
		}
		if(can){
			op=min(op, n-mind);
		}
		can=true;
		for(int i=maxd+1; i<maxd+n; i++){
			if(li[i]>li[i-1]){
				can=false;
				break;
			}
		}
		if(can){
			op=min(op, min(n-maxd+1, maxd+1));

		}
		can=true;
		for(int i=bind+1; i<bind+n; i++){
			if(li[i]<li[i-1]){
				can=false;
				break;
			}
		}
		if(can){
			op=min(op, n-bind);
		}
		can=true;
		for(int i=baxd+1; i<baxd+n; i++){
			if(li[i]>li[i-1]){
				can=false;
				break;
			}
		}
		if(can){
			op=min(op, min(n-baxd+1, baxd+1));
		}

		if(op==INT32_MAX){
			cout<<-1<<'\n';
		}else cout<<op<<'\n';
	}
}
