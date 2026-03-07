#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        m = n - 1;
        int pre, c, ans = INT_MAX;
        bool f=false;
        while (n--)
        {
            int c;
            cin >> c;

            if (n != m )
            {
                if (pre > c){
                    f= true ;

                }
                    
            }

         
            if (n != m )
                ans = min(ans, (((c - pre) / 2  ) + 1));

   pre = c;
        }
        if(f)cout<<0<<endl;
         else cout<<ans<<endl;
    }
}