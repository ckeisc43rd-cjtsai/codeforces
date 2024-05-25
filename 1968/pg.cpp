#include <iostream>
#include <string>
#include<vector>
using namespace std;
const int MAXN = 10005;
void solve() {

	int n, al, ar;
	cin >> n>>al>>ar;
vector<int> z(n*2);
	for(int q = 0; q < 1; ++q) {
		string P;
		cin >> P;
		string str = P ;
		int l = 0, r = 0;
		int cnt = 0;
		for(int i = 1; i < str.size(); ++i) {
			int len;
			if(i > r) len = 0;
			else len = min(r - i + 1, z[i - l]);
			while(i + len < str.size() && str[len] == str[i + len]) ++len;
			//cerr << i << ' ' << len << '\n';
			z[i] = len;
			if(i + len - 1 > r) {
				l = i;
				r = i + len - 1;
			}
			if(len == P.size()) ++cnt;
		}
		//cerr ;<< str << '\n';
		//for(int i = 1; i < str.size(); ++i) {
		//	cerr << z[i] << " \n"[i == str.size() - 1];
		//}
		 
		int dl=0, dr=n;
		while(dr>dl){
			int mid=(dl+dr+1)/2;
			int cnt=1;
			for(int i=0; i<=n; i++){
				if(z[i]>=mid){
					i+=mid-1;
					cnt++;
				}
			}
			if(cnt<al) dr=mid-1;
			else dl=mid;
		}
		cout<<dl<<'\n';
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int Cases;
	cin >> Cases;
	for(int t = 0; t < Cases; ++t) {
		solve();
	}
}

