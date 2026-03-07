# include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>> n ;
        int c=0 , c2=0 ;
        while(n--){
        int k ;
         cin>> k ;
         if(k<0) c2++;
         else c++;
        }
        int ans =0 ;
         if(c2>c){
          int w= c2-c;
          ans=(w+1)/2;
         c2 = c2-ans;
         }
         if(c2%2==1)cout<<ans+1<<endl;
        
         else cout<<ans<<endl;
    }
}