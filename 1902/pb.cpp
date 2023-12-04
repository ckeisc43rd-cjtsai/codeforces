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
	for(int i=0; i<t; i++){
		int n, p, l, tt;
		cin>>n>>p>>l>>tt;
		int week=(n-1)/7+1;
		int weeks=(week+1)/2;
		int days=week*tt+(week+1)/2*l;
		p-=days;
		if(p<0){
		if(week%2){
			weeks--;
			p+=l+tt;
		}
		if(p>0){
			cout<<n-(weeks+1)<<'\n';
			continue;
		}
		int s=(p*-1/(l+2*tt));
		weeks-=s;
		p+=s*(l+2*tt);
		}else{
			int det=p/l;
			p-=l*det;
			if(p)weeks++;
			weeks+=det;
		}
		cout<<n-weeks<<'\n';
	}
}
