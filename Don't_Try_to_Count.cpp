#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, s1;
        cin >> s >> s1;

        int c = 0;
        bool found = false;

        // At most double s a few times (logically up to m+2 times is enough)
        for (int i = 0; i <= 10; i++) { // limit to avoid infinite loop
            if (s.find(s1) != string::npos) {
                cout << c << endl;
                found = true;
                break;
            }
            s += s; // double s
            c++;
            if (s.size() > 2 * m) break; // no need to grow too large
        }

        if (!found) cout << -1 << endl;
    }
    return 0;
}
