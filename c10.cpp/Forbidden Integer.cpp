# include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x==1 &&k==1 && n>=1)cout<<0<<endl;
        else if(x!=1 && k>=1){
            cout<<n<<endl;
            while(n--){
                cout<<1;
            }
        }
        else if(x==1 && k>=3 && n%2==1){
            cout<<n/2<<endl;
  cout<<3;
  n=n-3;
                while(n=n-2){
                cout<<2;
            }
        }
        else if(x==1 && k>3 &&n%2==1)cout<<0<<endl;
        else if(x==1 && k>3 &&n%2!=1){
           while(n=n-2){
                cout<<2;
            }
        }
       



    }

}