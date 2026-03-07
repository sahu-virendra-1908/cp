# include<bits/Stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t ;
      while(t--){
        int n ;
        cin>>n ;
    int ans =0 ,c=0;
    while(n--){
        int k ;
        cin>>k ;
        if(k==0){
            c++;
            ans=max(ans,c);
        }
        else{
            c=0;
        }
    }
    cout<<ans<<endl;
      }


}