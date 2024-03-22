#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

vector<int> M(string s) {
    string br = "*";
    for (auto &i : s) br += string(1, s[i]) + "*";
    s = br;
    int n = s.size();
    vector<int> m(n);
    m[0] = 0;
    int l = 0;
    for (int i = 1; i < n; i++) {
        if (i > l + m[l]) {
            for (m[i] = 0; i - m[i] - 1 >= 0 && i + m[i] + 1 < n && s[i - m[i] - 1] == s[i + m[i] + 1]; m[i]++);
            l = i;
            continue;
        }
        int i_ = l - i + l;
        if (i_ - m[i_] > l - m[l]) m[i] = m[i_];
        else if (i_ - m[i_] < l - m[l]) m[i] = i_ - l + m[l];
        else {
            for (m[i] = m[i_]; i - m[i] - 1 >= 0 && i + m[i] + 1 < n && s[i - m[i] - 1] == s[i + m[i] + 1]; m[i]++);
            if (i + m[i] > l + m[l]) l = i; 
        }
    }
	for(int x:m) cout<<x<<' ';
	cout<<'\n';
    return m;
}

// 查询函数
bool is_palindrome(const vector<int>& P, int start, int end) {
    // 预处理后字符串的索引
    int n = P.size();
    int p_start = start * 2 + 1;
    int p_end = end * 2 + 1;
    int length = end - start + 1;

    // 判断长度为偶数的子串是否为回文
    if (length % 2 == 0) {
        int mid = (p_start + p_end) / 2;
        return P[mid] >= length / 2||P[mid+1]>=length/2;
    }
    // 判断长度为奇数的子串是否为回文
    else {
        int mid = (p_start + p_end) / 2;
        return P[mid] >=  (length+1) / 2;
    }
}


signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	vector<int> ans(200007, 0);
	for(int i=2; i<200007; i++){
		ans[i]=ans[i-1]+i;
	}
	while(t--){
		//int n, q;cin>>n>>q;
		string a;cin>>a;
		vector<int> P = M(a);
		continue;
		int n, q;
		vector<int> v(n+10, 0);
		v[0]=0;v[1]=1;
		if(a[1]==a[0]) v[1]=0;
		for(int i=2; i<n; i++){
			if(a[i-2]==a[i]) v[i]=v[i-1];
			else v[i]=i;
		}
		for(int i=0; i<q; i++){
			int s, x;cin>>s>>x;x--;s--;
			int db=0;
			if(is_palindrome(P, s, x)){db=1;cout<<'i';}
			if(v[x]<=s) cout<<0;
			else cout<<ans[(x-db-s+1)];
			cout<<'\n';
		}
	}
}

