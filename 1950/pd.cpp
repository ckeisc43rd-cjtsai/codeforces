#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
int arr[30]={
	10, 11,
	100, 101, 110, 111,
	1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111,
	10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111
};
bool finished=false;
void recur(int n){
	if(finished) return;
	if(n==1){
		cout<<"YES\n";
		finished=true;
	}
	for(int i=0; i<30; i++){
		if(n%arr[i]==0){
			recur(n/arr[i]);
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		finished=false;
		int n;cin>>n;
		recur(n);
		if(!finished) cout<<"NO\n";
	}
}
