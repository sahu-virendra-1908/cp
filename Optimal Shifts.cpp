#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Double the string to handle circular runs
        string ss = s + s;
        int maxRun = 0, cur = 0;
        for(char c : ss) {
            if(c == '0') cur++;
            else cur = 0;
            maxRun = max(maxRun, cur);
        }
        // But we need to cap at n (circular run can't exceed n, but there's at least one 1)
        maxRun = min(maxRun, n);
        
        cout << maxRun << "\n";
    }
    return 0;
}