#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> x(q);
        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }

        int last = 31;  // larger than max possible xi

        for (int i = 0; i < q; i++) {
            if (x[i] < last) {
                long long power = 1LL << x[i];
                long long add = 1LL << (x[i] - 1);

                for (int j = 0; j < n; j++) {
                    if (a[j] % power == 0) {
                        a[j] += add;
                    }
                }
                last = x[i];
            }
        }

        for (auto val : a) {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}
