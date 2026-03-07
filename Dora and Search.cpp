#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = n - 1;
        int low = 1, high = n;

        while (l < r) {
            if (a[l] == low) {
                l++;
                low++;
            }
            else if (a[l] == high) {
                l++;
                high--;
            }
            else if (a[r] == low) {
                r--;
                low++;
            }
            else if (a[r] == high) {
                r--;
                high--;
            }
            else {
                break;
            }
        }

        if (l < r)
            cout << l + 1 << " " << r + 1 << endl;
        else
            cout << -1 << endl;
    }
}