#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> v(n);   // FIXED type

        for (int i = 0; i < n; i++) {   // FIXED input loop
            cin >> v[i];
        }

        long long ans = 2;   // FIXED type

        while (true) {
            set<long long> s;

            for (int i = 0; i < v.size(); i++) {
                s.insert(v[i] % ans);
            }

            if (s.size() == 2) {
                cout << ans << endl;
                break;
            } else {
                ans = ans * 2;
            }
        }
    }
    return 0;
}
