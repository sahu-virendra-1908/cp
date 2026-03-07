#include <bits/stdc++.h>
using namespace std; 
int main() {
    int t;
    cin >> t; // ✅ FIX 1: Read t from input
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        b = min(a, b);

        long long c = 0; // ✅ FIX 2: reset c inside loop

        while (n--) {
            long long k;
            cin >> k;
            c += min((long long)k, (long long)a - 1); // ✅ FIX 3: use min(k, a-1)
        }

        cout << b + c << endl; // ✅ FIX 4: include initial timer contribution
    }
    return 0;
}
