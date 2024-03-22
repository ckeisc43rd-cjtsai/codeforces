#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long countSuitablePairs(vector<int>& s, int c) {
    int n = s.size();
    long long count = 0;
    
    int left = 0, right = 0;
    
    for (int x : s) {
        while (right < n && s[right] + x <= c) {
            ++right;
        }
        
        while (left < right && s[left] + x <= c) {
            ++left;
        }
        
        count += right - left;
    }
    
    return (long long)n * (n - 1) / 2 - count;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        int n, c;
        cin >> n >> c;
        
        vector<int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        
        cout << countSuitablePairs(s, c)<<'\n';// << endl;
    }
    
    return 0;
}

