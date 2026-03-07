#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ones = 0;
        for (char c : s) {
            if (c == '1') ones++;
        }

        int added = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == '1') {
                i++;
                continue;
            }

            // count length of zero segment
            int j = i;
            while (j < n && s[j] == '0') j++;
            int len = j - i;

            bool leftBlocked = (i > 0 && s[i - 1] == '1');
            bool rightBlocked = (j < n && s[j] == '1');

            if (leftBlocked && rightBlocked) {
                added += len / 3;
            } else if (leftBlocked || rightBlocked) {
                added += (len + 1) / 3;
            } else {
                added += (len + 2) / 3;
            }

            i = j;
        }

        cout << ones + added << "\n";
    }
    return 0;
}
