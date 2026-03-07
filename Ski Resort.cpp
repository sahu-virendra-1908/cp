# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q,ans =0;
        cin>>n>>k>>q;
        int s=n;
        vector<int> a(n);
        int y=0 ;
        while(n--){
         cin>>a[y++];
        }

       
       int w=k;
        
        int i =0 ;
       int  m=1;
        for(int j =0 ; j < s; j++){
           if(a[j]>q){i=j+1 ;
        m=1;
        }
        else   if((j-i+1 ) >=w){
              ans+=m;
              m++;
           }
        }
        cout<<ans<<endl;
    }

}
