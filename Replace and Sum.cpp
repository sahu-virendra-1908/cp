#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // Build suffix max
        long long maxi = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            maxi = max({maxi, a[i], b[i]});
            a[i] = maxi;
        }

        // Build prefix sum
        vector<long long> prefix(n);
        prefix[0] = a[0];

        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + a[i];

        // Answer queries in O(1)
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            long long ans = prefix[r];
            if (l > 0)
                ans -= prefix[l - 1];

            cout << ans << " ";
        }

        cout << "\n";
    }
}