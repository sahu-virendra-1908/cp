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

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            vector<pair<long double, int>> events;

            for (int j = i + 1; j < n; j++) {
                long double m = (a[i] + a[j]) / 2.0;

                if (a[j] > a[i]) {
                    // valid when k > m
                    events.push_back({m, +1});
                } else if (a[j] < a[i]) {
                    // valid when k < m
                    events.push_back({m, -1});
                }
            }

            sort(events.begin(), events.end());

            int cur = 0, best = 0;

            // First count all (-∞, m)
            for (auto &e : events) {
                if (e.second == -1) cur++;
            }

            best = cur;

            for (auto &e : events) {
                if (e.second == -1) {
                    cur--; // leaving left interval
                } else {
                    cur++; // entering right interval
                }
                best = max(best, cur);
            }

            ans[i] = best;
        }

        for (int x : ans) cout << x << " ";
        cout << "\n";
    }
}