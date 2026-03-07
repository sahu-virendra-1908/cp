#include <bits/stdc++.h>
using namespace std;

int f(int i, string s, map<string,int>& m) {
    if (i >= s.size()) return 0;

    int ans = 0;

    // Case 1
    if (i + 1 < s.size()) {
        string sub = s.substr(i + 1);
        if (m.find(sub) == m.end()) {
            m[sub]++;
            ans += 1 + f(i + 1, s, m);
        }
    }

    // Case 2
    if (i + 1 < s.size() && s[i] != s[i + 1]) {
        string sub = s.substr(i, 1) + s.substr(i + 2);
        if (m.find(sub) == m.end()) {
            m[sub]++;
            ans += 1 + f(i + 2, s, m);
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<string, int> m;
        m[s] = 1;

        int ans = 1;
        ans += f(0, s, m);

        cout << ans << endl;
    }
}
