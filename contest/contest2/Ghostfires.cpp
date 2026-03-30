#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int r, g, b;
        cin >> r >> g >> b;

        vector<pair<int, char>> cnt = {
            {r, 'R'}, {g, 'G'}, {b, 'B'}
        };

        string s;

        while (true) {
            // sort descending
            sort(cnt.rbegin(), cnt.rend());

            // try to take 3 different colors
            vector<int> used;

            for (int i = 0; i < 3; i++) {
                if (cnt[i].first > 0) {
                    used.push_back(i);
                }
            }

            if (used.empty()) break;

            bool placed = false;

            // try all permutations of used colors (max 6)
            sort(used.begin(), used.end());
            do {
                bool ok = true;

                for (int idx : used) {
                    char ch = cnt[idx].second;
                    int n = s.size();

                    if (n >= 1 && s[n - 1] == ch) ok = false;
                    if (n >= 3 && s[n - 3] == ch) ok = false;
                }

                if (ok) {
                    for (int idx : used) {
                        s.push_back(cnt[idx].second);
                        cnt[idx].first--;
                    }
                    placed = true;
                    break;
                }

            } while (next_permutation(used.begin(), used.end()));

            if (!placed) break;
        }

        cout << s << "\n";
    }

    return 0;
}