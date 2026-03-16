#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int w;
            cin >> w;
            int ans = 0, i = 0;
            while (w)
            {
                if (s[i] == 'A')
                {
                    w--;
                }
                else
                {
                    w = w / 2;
                }
                ans++;
                if (i == n - 1)
                {
                    i = 0;
                }
                else
                {
                    i++;
                }
            }
            cout<<ans << endl;
        }
        
    }
}