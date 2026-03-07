#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
if(b==0) return a;

return gcd(b, a%b);
}
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        int i =1;
           int ans=0;
        while (n--)
        {
            int k;
            cin >> k;
        if(k-i !=0 )ans = gcd(ans, abs(k-i));
        i++;
        }
        cout << ans<< endl;
    }

}