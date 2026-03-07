#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        if (a[l] == a[r]) {
            l++; r--;
        } else if (a[l] == x) {
            l++;
        } else if (a[r] == x) {
            r--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = n - 1;
        bool ok = true;

        while (l < r) {
            if (a[l] == a[r]) {
                l++; r--;
            } else {
                ok = check(a, a[l]) || check(a, a[r]);
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
