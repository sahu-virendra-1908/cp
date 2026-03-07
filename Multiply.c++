#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if(n==1) {cout<<0<<endl;
      continue;
        }
        int c = 0;
        long long m = n;
        for (int i = 1; i <= n; i++)
        {
            if (m >= 6)
            {
                if (m % 6 == 0)
                    m = m / 6;
                else
                    m = m * 2;
                c++;
            }
            else
            {
                m = m * 2;
                c++;
            }

            if (m == 1)
               { cout << c << endl;
                break;}

                
        }
        if (m != 1)
            cout << -1 << endl;
    }
}