#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

int arr[10000000]={
	0
};

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	arr[0]=1;
	for(int i=1; i<10000000; i++){
		arr[i]=arr[i-1]+i+1;
	}
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<arr[n]<<'\n';
	}
}
