# include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n ;
        bool c= false ;
        int i =0 ;
        while(i<n){
      int j ;
      cin>>j;
       if( i==0 &&j==1) c= true;
       i++;
    }
      if(c) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
        
    }
}