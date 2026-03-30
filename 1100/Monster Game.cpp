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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        int ans = 0, r=0;
        for (int i = 0; i < n; i++)
        {
            int p = a[i];
            int l = 0, k = 0;
            for (int j = i; j < n; j++)
            {
                if (b[k] >= a[j])
                {
                    k++;
                }
            }
          if(r<=(p*k)){
            r= p*k ;
            ans =p ;
          }
        }

        cout << ans << endl;
    }
}