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
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int i = 0, j = n - 1;
        long long ans = 0;
        vector<long long> p(n + 1);
        p[0] = 0;
        for (int i = 1; i < n; i++)
        {
            p[i] = p[i - 1] + a[i - 1];
        }
        for (int cnt = 0; cnt <= k; cnt++)
        {
            int f = k - cnt;
            int s = cnt * 2;
            ans = max(ans, p[n - f] - p[s]);
        }
        cout << ans << "\n";
    }
    
    return 0;
}
