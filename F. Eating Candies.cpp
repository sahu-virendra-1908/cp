#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int i = 0, j = n - 1;
        long long s = a[0], b = a[n - 1];
        int ans = 0;

        while (i < j)
        {
            if (s == b)
            {
                ans = max(ans, i + 1 + (n - j));
            }

            if (s < b)
            {
                i++;
                s += a[i];
            }
            else
            {
                j--;
                b += a[j];
            }
        }

        cout << ans << "\n";
    }
}
