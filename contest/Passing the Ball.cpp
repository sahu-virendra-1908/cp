#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'R' && s[i + 1] == 'L') {
                cout << i + 2 << endl;
                break;
            }
        }
    }
}