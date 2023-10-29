#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 10000005
bool isprime[MAXN];
vector<int> prime;
signed main(){
	int t;cin>>t;
	while(t--){
		int a, b;cin>>a>>b;
		if(b<=3){
			cout<<-1<<'\n';
			goto bla;
		}
		if(a!=b){
			if(b%2){
				cout<<(b-1)/2<<' '<<(b-1)/2<<'\n';
			}else{
				cout<<b/2<<' '<<b/2<<'\n';
			}
		}else{
			for(int i=2; i*i<=a; i++){
				if(!(a%i)){
					cout<<i<<' '<<a-i<<'\n';
					goto bla;
				}
			}
			cout<<-1<<'\n';
		}
		bla:
		int aldf;
		
	}
}

