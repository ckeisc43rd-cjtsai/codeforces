#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
int p[25]={	2, 3, 5, 7, 11, 13,17, 19, 23, 29, 31, 37, 41, 43,47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){//cout<<t;cout.flush();
		int a, b, l;cin>>a>>b>>l;
		vector<int> sa(25, 0), sb(25, 0), pp(25, 0);
		for(int i=0,tl=l, ta=a, tb=b; i<25 ;i++){
			while(!(ta%p[i])){
				sa[i]++;ta/=p[i];
			}
			while(!(tb%p[i])){
				sb[i]++;tb/=p[i];
			}
			while(!(tl%p[i])){
				pp[i]++;tl/=p[i];
			}
		}
		int da=1000, db=1000, ia, ib;
		for(int i=0; i<25; i++){
			if(pp[i]==0&&sa[i]!=0) {
				da=3000;
				continue;
			}
			if(pp[i]==0&&sb[i]!=0){
				db=3000;
				continue;
			}
			if(sa[i]!=0){
				if(pp[i]/sa[i]<da){
					da=pp[i]/sa[i];
					ia=i;
				}
			}
			if(sb[i]!=0){
				if(pp[i]/sb[i]<db){
					db=pp[i]/sb[i];
					ib=i;
				}
			}
		}
		if(da==3000){
			if(db==3000) cout<<1<<'\n';
			else cout<<db<<'\n';
			continue;
		}else if(db==3000){
			cout<<da<<'\n';
			continue;
		}
		if(a==b){
			cout<<da+1<<'\n';
			continue;
		}
		int ans=db+1;
		for(int i=1; i<=da; i++){
			vector<int> rem(25);
			for(int j=0; j<25; j++) rem[j]=pp[j]-i*sa[j];
			int mini=1000;
			for(int j=0; j<25; j++){
				if(pp[j]==0&&sb[j]){
					mini=3000;continue;
				}if(sb[j]){
					mini=min(mini, rem[j]/sb[j]);
				}
			}
			if(mini==3000)mini=0;
			ans+=mini+1;
		}
		cout<<ans<<'\n';

	}
}
