#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        ll A = m/a;
        ll B = m/b;
        ll C = m/c;

        ll ab = m/lcm(a,b);
        ll ac = m/lcm(a,c);
        ll bc = m/lcm(b,c);

        ll abc = m/lcm(lcm(a,b),c);

        ll onlyA = A - ab - ac + abc;
        ll onlyB = B - ab - bc + abc;
        ll onlyC = C - ac - bc + abc;

        ll abOnly = ab - abc;
        ll acOnly = ac - abc;
        ll bcOnly = bc - abc;

        ll x = onlyA*6 + abOnly*3 + acOnly*3 + abc*2;
        ll y = onlyB*6 + abOnly*3 + bcOnly*3 + abc*2;
        ll z = onlyC*6 + acOnly*3 + bcOnly*3 + abc*2;

        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
}