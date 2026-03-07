#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> m;

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            m[k]++;
        }

        if (m.size() == 1  || n==2) {
            cout << "Yes\n";
        } 
        else if (m.size() > 2) {
            cout << "No\n";
        } 
        else {
            // size == 2, check frequency difference
            auto it1 = m.begin();
            auto it2 = next(it1);

            if (abs(it1->second - it2->second) == 1  )
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
