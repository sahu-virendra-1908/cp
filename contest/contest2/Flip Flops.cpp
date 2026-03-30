#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c, k;
        cin >> n >> c >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long ans = c;
bool f= false;

        for (int i = 0; i < n; i++) {
            if (a[i] <= ans) {
                ans += a[i];
                f= true;

            } else {
                break;
            }

            if(k>0){
             if(k >= c -a[i])  { ans+=abs(c-a[i]);
            k = k - abs(c-a[i]);

            }
              else{
                ans+=k;
                k=0 ;
              }
              c= ans;
            }
        }


      
    

        cout << ans << '\n';
    }
}