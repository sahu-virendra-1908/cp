#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;

        int c1 = INT_MAX, c2 = INT_MAX, c3 = INT_MAX;

        while (n--)
        {
            int s;
            cin >> s;
            int w = s;

            int m1 = INT_MAX, m2 = INT_MAX;

            while (s--)
            {
                int x;
                cin >> x;

                if (x < m1)
                {
                    m2 = m1;
                    m1 = x;
                }
                else if (x < m2)
                {
                    m2 = x;
                }
            }

            if (w == 1)
                m2=m1;

            if (c2 > m2)
            {
                  c2 = m2 ;
                  
            }

            c3 = min(c3, m1);
            ans+= m2;
        }

        ans = ans + c3- c2 ;
      

        cout << ans << endl;
    }
    return 0;
}
