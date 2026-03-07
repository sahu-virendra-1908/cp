# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n ;
        int c0=0 ;
        int c1=0;
        while(n--){
            int k ;
            cin>>k;
            if(k%2==0)c0++;
            else c1++;

        }
        
         if(c1%2!=0)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;


        

    }

}