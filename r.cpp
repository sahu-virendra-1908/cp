#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long ans = LLONG_MAX;
        int c =0 ;
        while (n--) {
            int w;
            cin >> w;
            if(w%2==0)c++;
            if (w % k == 0){ ans = 0;
            break;}
            long long needed = (k - (w % k)) % k; // Fix
            ans = min(ans, needed);
        }
        if(k==4){
            if(c>=2)cout << 0 << endl;
            else if(c==1)cout<<1<<endl;
            else cout<<ans<<endl;
        }
      else  cout << ans << endl;
    }
}
