#include <bits/stdc++.h>
using namespace std;

int query(int i, int j) {
    cout << "? " << i << " " << j << endl;
    cout.flush();

    int res;
    cin >> res;
    if (res == -1) exit(0);
    return res;
}

void solve() {
    int n;
    cin >> n;

    // Step 1: check pairs
    for (int i = 1; i <= 2 * n; i += 2) {
        if (query(i, i + 1) == 1) {
            cout << "! " << i << endl;
            cout.flush();
            return;
        }
    }

    // Step 2: find zero in first pair (1,2)
    for (int i = 3; i <= 2 * n; i += 2) {
        if (query(1, i) == 1) {
            cout << "! 1" << endl;
            cout.flush();
            return;
        }
    }

    // otherwise 2 is zero
    cout << "! 2" << endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}