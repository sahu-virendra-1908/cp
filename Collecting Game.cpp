#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({a[i], i});
        }
        sort(v.begin(), v.end());
        long long c = 0;
        for (int i = 0; i < n; i++)
        {
            c += v[i].first;
            long long s = 0;
            int ans = i;
            for (int j = i + 1; j < n; j++)
            {
                if (c + s >= v[j].first)
                {
                    ans++;
                    s += v[j].first;
                }
                else
                    break;
            }
            a[v[i].second] = ans;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";


        cout << "\n";
    }
}