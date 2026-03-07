#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> m;
        for (auto it : s) {
            m[it]++;
        }

        int cnt = 0;
        for (auto it : m) {
            if (it.second % 2 != 0) cnt++;
        }

        if (cnt <= k + 1) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
