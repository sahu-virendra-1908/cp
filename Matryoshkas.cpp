#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<int,int> m;

        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            m[k]++;
        }

        int ans = 0;
        int prev_freq = 0;
        int prev_val = -1;

        for(auto it : m){
            int val = it.first;
            int freq = it.second;

            if(prev_val == -1 || val != prev_val + 1){
               
                ans += freq;
            }
            else if(freq > prev_freq){
                ans += (freq - prev_freq);
            }

            prev_freq = freq;
            prev_val = val;
        }

        cout << ans << endl;
    }
}