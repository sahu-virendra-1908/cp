#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long common = x & y;

        long long p = x + common;
        long long q = y - common;

        cout << p << " " << q << "\n";
    }

    return 0;
}
