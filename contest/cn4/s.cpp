#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n+1);
        for(int i = 1; i <= n; i++) cin >> p[i];
        
        vector<bool> marked(n+1, false);
        int ans = 0;
        
        for(int i = 1; i <= n; i++){
            if(marked[i]) break;        // marked chair → stop
            if(p[i] <= i){              // safe to sit
                marked[p[i]] = true;
                ans++;
            }
            // else skip
        }
        
        cout << ans << "\n";
    }
    return 0;
}