# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
 int a,b , c,d ;
  cin>> a>>b>>c>>d ;
      if(d>b){
        int ans =d-b ;
         a= a+ans ;
        if(a<c)cout<<-1<<endl ;
        else if(a==c)cout<<ans<<endl ;
        else if(a>c){
            ans = ans+(a-c);
            cout<<ans<<endl ;
        }
         
      }
        else if(d==b){
            if(a==c)cout<<0<<endl ;
            else if(a>c)cout<<a-c<<endl ;
            else cout<<-1<<endl ;
        }
        else if(d<b)cout<<-1<<endl ;
    }
}
