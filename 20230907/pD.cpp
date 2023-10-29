#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
int gcd(int a, int b){
	while( a!=0 and b!=0 ){
		if( a >= b ){
			a = a%b;
		}
		else if( b > a ){
			b = b%a;
		}
	}
	if( a >= b ){
		return a;
	}else{
		return b;
	}
}
signed main(){
	int t;cin>>t;
	while(t--){
		int n, x, y;cin>>n>>x>>y;
		int com=x*y/gcd(x, y);
		int dx=n/x-n/com;
		int dy=n/y-n/com;
		cout<<(n+n-dx+1)*(dx)/2-(1+dy)*(dy)/2<<'\n';
	}
}
