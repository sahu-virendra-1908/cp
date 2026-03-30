#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b){
    if(a == 0) return b;
    if(b == 0) return a;
    return a / __gcd(a, b) * b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ll p = (i > 0)   ? __gcd(a[i-1], a[i]) : 0LL;
            ll q = (i < n-1) ? __gcd(a[i], a[i+1]) : 0LL;
            ll L = lcm(p, q);
            if(L < a[i]) ans++;
        }
        
        cout << ans << "\n";
    }
    return 0;
}