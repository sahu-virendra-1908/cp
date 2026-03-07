#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        for(long long x=2;;x++){
            bool ok=false;

            for(int i=0;i<n;i++){
                if(gcd(a[i],x)==1){
                    ok=true;
                    break;
                }
            }

            if(ok){
                cout<<x<<"\n";
                break;
            }
            
        }
    }
}