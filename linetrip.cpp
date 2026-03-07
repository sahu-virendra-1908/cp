# include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;

    while(t--){
    int n ,x ;
    cin>>n>>x;
    int ans = INT_MIN;
    int s=0 ;
    while(n--){
        int d ;
        cin>>d;
        ans =max(ans,d-s );
        s=d;
    }
    ans =max(ans,2*(x-s) );
    cout<<ans<<endl;

    }
}