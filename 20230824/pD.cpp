#include <bits/stdc++.h>
#define pii pair<int, int>
#define int unsigned long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int a;cin>>a;
		a*=2;
		int d=sqrt(a);
		//cout<<'s'<<d<<' ';
		while(d*(d-1)<=a) d++;
		//cout<<d<<' ';
		d--;
		a/=2;
		//cout<<a<<' ';
		cout<<(int)(a-d*(d-1)/2)+d<<'\n';
	}
}
