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
        int i = 0;
        while (n--)
        {
            cin >> a[i++];
        }
        if (n == 1)
            cout << a[0];
        else if (n > 1)
        {
            bool f = true;
            bool s = true;
            int m = max(a[0], a[1]);
            for (int i = 0; i < n - 1; i++)
            {
                if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
                {
                    s = false;
                }
                if ((a[i] % m == 0 && a[i + 1] % m == 0) || (a[i] % m != 0 && a[i + 1] % m != 0))
                {
                    s = false;
                }
            }
            if (s)
                cout << 2 << endl;
            else if (f)
                cout << m << endl;
            else
                cout << 0 << endl;
        }
    }
}