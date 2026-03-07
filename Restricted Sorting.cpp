#include <bits/stdc++.h>
using namespace std;

bool can(long long k, const vector<long long>& a) {
    auto s = a;
    sort(s.begin(), s.end());
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != s[i] && abs(a[i] - s[i]) < k) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto& x : a) cin >> x;

        auto s = a;
        sort(s.begin(), s.end());

        bool sorted = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != s[i]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "-1\n";
            continue;
        }

        long long l = 0, r = 2'000'000'010LL, ans = 0;
        while (l <= r) {
            long long m = l + (r - l) / 2;
            if (can(m, a)) {
                ans = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        cout << ans << '\n';
    }
}