#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a=0, b=0, c=0, d=0;
		int onx=0, onxi=0, ony=0, onyi=0;
		for(int i=0; i<n; i++){
			int x, y;cin>>x>>y;
			if(x==0){
				if(y>0) ony++;
				else if(y<0) onyi++;
			}else if(y==0){
				if(x>0) onx++;
				else if(x<0) onxi++;
			}else{
				if(x>0&&y>0) a++;
				else if(x<0&&y>0) b++;
				else if(x<0&&y<0) c++;
				else if(x>0&&y<0) d++;
			}
		}
			if((a==0&&b==0&&ony==0)||(c==0&&b==0&&onxi==0)||(c==0&&d==0&&onyi==0)||(a==0&&d==0&&onx==0)) cout<<"YES\n";
			else cout<<"NO\n";
	}
}
