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

        string s;
        cin >> s;

        bool sorted = true;
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] > s[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "Bob\n";
            continue;
        }

        cout << "Alice\n";

        int L = -1, R = -1;

        for (int i = 0; i < n; i++)
            if (s[i] == '1') {
                L = i;
                break;
            }

        for (int i = n - 1; i >= 0; i--)
            if (s[i] == '0') {
                R = i;
                break;
            }

        cout << R - L + 1 << "\n";
        for (int i = L; i <= R; i++)
            cout << i + 1 << " ";
        cout << "\n";
    }

    return 0;
}