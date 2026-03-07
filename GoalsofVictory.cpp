# include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int ans =0 ;
        int n ;
        cin>>n ;
        for(int i =0 ; i < n -1  ; i++){
            int x ;
            cin>>x ;
            ans += x;
        }
        cout<<-ans<<endl;

    }
}