# include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
    int k ;
    cin>>k;
    n--;
    int ans =INT_MAX;
    bool f = true;
    while(n--){
        int x;
        cin>>x;
        if(k>x){
            cout<<0<<endl ;
            f = false;
            break;
        }
ans = min(ans , (x-k)/2 +1);
k = x;

    }
    if(f)cout<<ans<<endl ;
    }
}