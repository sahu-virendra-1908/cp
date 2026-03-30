#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
        bool ok = true;
        
        for(int i = 0; i < n && ok; i++){
            bool free_pos = (i >= n-k && i <= k-1);
            if(!free_pos && b[i] != -1 && b[i] != a[i]) ok = false;
        }
        
        if(ok && n < 2*k){
            vector<bool> used(n+1, false);
            set<int> aset(a.begin()+(n-k), a.begin()+k);
            for(int i = n-k; i <= k-1 && ok; i++){
                if(b[i] != -1){
                    if(!aset.count(b[i]) || used[b[i]]) ok = false;
                    else used[b[i]] = true;
                }
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
