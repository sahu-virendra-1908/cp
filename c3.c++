#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool threeDots = false;
        int dotCount = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dotCount++;
            if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
                threeDots = true;
        }

        if (threeDots) cout << 2 << "\n";
        else cout << dotCount << "\n";
    }
    return 0;
}
