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
        int i = 0;
        vector<int> a(n);
        while (i < n)
        {
            cin >> a[i];
        }
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]].push_back(a[i]);
        }
        if(m.size()==1){
            cout<<"NO"<<endl ;
            
        }
        else{
            for(auto it: m){
                for(auto i : it.second){
                    cout<<i<<
                }
            }
        }
    

    }
}