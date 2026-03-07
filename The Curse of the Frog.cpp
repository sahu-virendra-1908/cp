#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long answer = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            long long safe = (b - 1) * a;

            // Case 1: reach without rollback
            if (safe >= x) {
                answer = 0;
                continue;
            }

            long long gain = b * a - c;

            // Case 2: no positive cycle growth
            if (gain <= 0) {
                continue;
            }

            long long need = x - safe;

            long long r = (need + gain - 1) / gain;

            answer = min(answer, r);
        }

        if (answer == LLONG_MAX)
            cout << -1 << "\n";
        else
            cout << answer << "\n";
    }

    return 0;
}