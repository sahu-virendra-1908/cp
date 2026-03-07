#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ne = 0;
        cin >> n;
        vector<int> a(n);
        int i = 0, m = INT_MAX;
        long long ans = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                ne++;
            ans += abs(a[i]);
            m = min(m, abs(a[i]));
        }
        if (ne % 2 == 0)
            cout << ans << "\n";
        else
            cout << ans - 2 * m << "\n";
    }
}