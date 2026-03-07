#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];

        vector<vector<int>> pos(k + 1);

        // store positions (1-based index)
        for (int i = 0; i < n; i++) {
            pos[c[i]].push_back(i + 1);
        }

        int answer = n;  // large initial value

        for (int color = 1; color <= k; color++) {

            if (pos[color].empty()) continue;

            vector<int> temp;

            // add virtual boundaries
            temp.push_back(0);
            for (int p : pos[color])
                temp.push_back(p);
            temp.push_back(n + 1);

            int mx1 = 0, mx2 = 0;

            for (int i = 1; i < temp.size(); i++) {
                int gap = temp[i] - temp[i - 1] - 1;

                if (gap >= mx1) {
                    mx2 = mx1;
                    mx1 = gap;
                } else if (gap > mx2) {
                    mx2 = gap;
                }
            }

            int best = max(mx2, mx1 / 2);
            answer = min(answer, best);
        }

        cout << answer << "\n";
    }

    return 0;
}