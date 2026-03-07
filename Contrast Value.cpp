# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>a(n);
        for(int i =0 ; i<n ; i++){
            cin>>a[i];
        }
    long long c=0 ;
      for(int i =1; i < n ; i++){
        c+=abs(a[i]-a[i-1]);
      }
      if(c==0){
        cout<<1<<endl;
        continue;
      }
      sort(a.begin(),a.end());
      int i =0 , j = n-1;
      long long t=0 ;
      while (i<j)
      {
        long long k = (t+abs(a[i]-a[j]));
        if(k<c ){
            t=k;
            i++;
        }
        else  if(k>c){
 
  j--;
        }
        else break;
      }
       cout<<n-(j-i -1)<<endl;

      
    }
}