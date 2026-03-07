#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long weeks = n - k + 1;   // total number of weeks
    long double totalSum = 0;

    // calculate sum of first window
    long long windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += v[i];
    }
    totalSum += windowSum;

    // slide the window
    for (int i = k; i < n; i++) {
        windowSum += v[i];        // add new element
        windowSum -= v[i - k];    // remove old element
        totalSum += windowSum;
    }

    long double average = totalSum / weeks;

    // print with high precision
    cout << fixed << setprecision(10) << average << "\n";

    return 0;
}
