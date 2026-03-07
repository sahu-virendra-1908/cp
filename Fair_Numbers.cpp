#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long n;
        cin>>n;
      long long num = n;

        while (true)
        {
            bool f = true;
         long long  j = num;
            while (j)
            {
             long long  k = j % 10;
                j = j / 10;
                if (k != 0 && num % k != 0)
                {
                    
                        f = false;
                        break;
                    
                }
               
            }
            if (f)
                {
                    cout << num << endl;
                    break;
                }
                else
                    num++;
             
        }
    }
}