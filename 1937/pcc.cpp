#include <iostream>
#include <string>
#include <vector>
using namespace std;

string query(int a, int b, int c, int d) {
    cout << "? " << a << " " << b << " " << c << " " << d << endl;
    cout.flush();
    string result;
    cin >> result;
    return result;
}

int find_bit_position(int a, int b, int c, int d, int n) {
    // Binary search to find bit position where the numbers differ
    int low = 0, high = n;
    while (low < high) {
        int mid = (low + high) / 2;
        if (query(a, b, c | (1 << mid), d) == "<") {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

void find_max_xor_pair(int n) {
    // Initial arbitrary indices
    int a = 0, b = 1;

    // Find bit position where the numbers differ
    int bit_pos = find_bit_position(a, b, 0, 0, n);

    // Determine which pair contributes to the higher value
    if (bit_pos == n) {
        cout << "! " << a << " " << b << endl;
    } else {
        int mask = 1 << bit_pos;
        int c = 0, d = 0;
        for (int i = 0; i < n; ++i) {
            if (i & mask) {
                c |= i;
            } else {
                d |= i;
            }
        }
        if (query(a, c, b, d) == "<") {
            cout << "! " << b << " " << d << endl;
        } else {
            cout << "! " << a << " " << c << endl;
        }
    }
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        find_max_xor_pair(n);
    }
    return 0;
}

