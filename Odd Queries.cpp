#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0) v[i] += v[i - 1]; // prefix sum
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            long long totalSum = v[n - 1];

            long long removedSum =
                v[r - 1] - (l > 1 ? v[l - 2] : 0);

            long long newSum =
                totalSum - removedSum + 1LL * (r - l + 1) * k;

            if (newSum % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
