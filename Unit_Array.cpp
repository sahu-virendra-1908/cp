#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cn = 0, c = 0;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if (k == -1) cn++;
            else c++;
        }

        int ops = 0;
        // Step 1: Make sum >= 0
        if (cn > c) {
            // flips needed
            ops = (cn - c + 1) / 2; // ceil division
            cn -= ops; // we flipped some -1 to 1
        }

        // Step 2: Make product = 1
        if (cn % 2 != 0) ops++;

        cout << ops << "\n";
    }
}
