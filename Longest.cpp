#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 != 0) {
            cout << 1 << endl;
        } else {
            long long i =0 ;
            for( i =1 ; i < n ; i++){
                if(n%i!=0){
                    break;
                }
            }
         
            cout << i-1<< endl;
        }
    }
    return 0;
}
