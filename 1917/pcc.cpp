#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> v(k);
        for (int i = 0; i < k; ++i) {
            cin >> v[i];
        }

        int maxScore = 0;

        // Calculate the initial score based on the initial state of the array
        for (int i = 0; i < n; ++i) {
            if (a[i] == i + 1) {
                maxScore++;
            }
        }

        // Calculate the contribution of each element in the sequence v to the final score
        for (int i = 0; i < k; ++i) {
            maxScore += (v[i] - 1) / d;
        }

        cout << maxScore << '\n';
    }

    return 0;
}

