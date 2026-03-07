#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool hasZero = false;
        bool hasNonZero = false;
        bool zeroAfterNonZero = false;
        bool k = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0) {
                hasZero = true;
                if (  hasNonZero) {
                    zeroAfterNonZero = true;
                }
                
            } else {
                hasNonZero = true;
                if( zeroAfterNonZero) {
                    k = true;
            }
        }
        }

        if (!hasNonZero) {
            cout << 0 << "\n";   // all zeros
        } else if (k) {
            cout << 2 << "\n";   // mixed with zero in between
        } else {
            cout << 1 << "\n";   // no zeros OR zeros only at start
        }
    }

    return 0;
}
