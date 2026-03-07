#include <iostream>
#include <vector>
using namespace std;

// Function to check if array is sorted
bool sorted(const vector<int>& a) {
    for (int i = 0; i < (int)a.size() - 1; i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (k >= 2) {
            cout << "YES" << endl;
        } else if (k == 1 && sorted(a)) {
            cout << "YES" << endl;
        }  else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
