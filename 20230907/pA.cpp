#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

signed main(){
	int t;cin>>t;
	while(t--){
		int a, b, c;cin>>a>>b>>c;
		int s= abs(a-b);
		if(s%2) s=s/2+1;
		else s=s/2;
		if(s%c) s=s/c+1;
		else s=s/c;
		cout<<s<<'\n';
	}
}
