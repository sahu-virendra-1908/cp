#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int digits = log10(n) + 1;  // number of digits
        int ans = 9 * (digits - 1); // all numbers with fewer digits

        // Leading digit of n
        int leading = n / pow(10, digits - 1);

        ans += leading;

        // But if n < leading * 10^(digits-1), subtract 1
        if (n < leading * pow(10, digits - 1))
            ans--;

        cout << ans << "\n";
    }
    return 0;
}
