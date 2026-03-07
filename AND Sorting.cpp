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

        int ans = -1, i = 0;
        while (n--)
        {
            int k;
            cin >> k;
         if(i!=k&& ans ==-1)  ans =k ;
         else if(i!=k) ans &=k; 
            i++;
        }
        if(ans==-1)ans =0 
        cout << ans << endl;
    }
}
