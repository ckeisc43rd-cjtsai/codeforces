#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // We will use a greedy approach, starting from the smallest coin value
        // and moving upwards to maximize the usage of larger coins.
        int coins = 0;
        
        // Loop through the triangular numbers in ascending order
        for (int i = 1; i <= 5; i++) {
            int triangular_number = (i * (i + 1)) / 2;
            
            // Calculate how many coins of this value can be used
            coins += n / triangular_number;
            
            // Update n to reflect the remaining value after using coins of this value
            n %= triangular_number;
        }

        cout << coins << '\n';
    }

    return 0;
}

