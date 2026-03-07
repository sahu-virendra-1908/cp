#include <bits/stdc++.h>
using namespace std;

int f(string s, map<string, int> &memo, set<string> &uniqueSubs) {
    if (memo.find(s) != memo.end())
        return memo[s]; // already computed

    int n = s.size();
    if (n == 0) return 0;

    int ans = 0;
    if (uniqueSubs.find(s) == uniqueSubs.end()) {
        ans = 1; // count this substring once
        uniqueSubs.insert(s);
    }

    // Recurse by removing one character at a time
    for (int i = 0; i < n; i++) {
        string temp = s.substr(0, i) + s.substr(i + 1);
        ans += f(temp, memo, uniqueSubs);
    }

    memo[s] = ans;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int len;
        cin >> len;  // read but not used — can remove if not needed
        string s;
        cin >> s;

        map<string, int> memo;
        set<string> uniqueSubs;

        f(s, memo, uniqueSubs);
        cout << uniqueSubs.size() << endl;
    }
    return 0;
}
