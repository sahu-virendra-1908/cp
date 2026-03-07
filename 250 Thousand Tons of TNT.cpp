#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // sort(a.begin(), a.end());
        long long ans = 0;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                long long f = 0, e = 0;
                int k = 0, l = n-1;
                for (int j = 0; j < n; j++)
                {
                    f += a[j];
                    if (j - k >= i)
                    {
                        f -= a[k];
                        k++;

                    }
                    e += a[n - j - 1];
                    if (j - l >= i)
                    {
                        e -= a[l];
                        l--;
                    }
                }
                ans = max(ans, e - f);
            }
        }
        cout << ans << endl;
    }
}
