# include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>ans(n);

        int i =0 ;
        while(i<n){
            int k;
            cin>>k ;
            ans[i]=n+1-k ;
            i++;

        }
        i =0 ;
          while(i<n){
            cout<<ans[i]<<" ";
            i++;
          }
          cout<<endl;

    }
}