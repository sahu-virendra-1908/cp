# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans =1, c=1 ;
        vector<int>v(n);
          for(int i =0 ; i <n ; i++){
            cin>>v[i];
          }
          sort(v.begin(),v.end());
     for(int i =0 ; i <n-1; i++){
        if(v[i+1]-v[i]<=k){
       c++;
        ans = max(ans , c);
        }
        else{
c=1;

        }
     }
     cout<<n-ans<<endl;
    
    }
}