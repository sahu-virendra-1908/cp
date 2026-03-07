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
        vector<int> v(n);
        int i = 0;
        while (n--)
        {
            cin >> v[i];
            i++;
        }
        int ans =2;
        while(1){
            set<int>s;

            for (int i = 0; i < v.size(); i++)
            {
                s.insert(v[i] % ans);
            }
            if(s.size()==2){
                cout<<ans<<endl;
                break;
            }
            else{
                ans=ans*2;
            }
        }
    }
}