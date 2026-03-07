# include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    int ans = INT_MAX;
    while(n--){
        int k;
        cin>>k ;
        ans = min(ans ,abs(k));
    }
    cout<<ans<<endl;
}