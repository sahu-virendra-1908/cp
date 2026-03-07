# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    int k = n, x=0 ;
    while(k--){
        int w;
        cin>>w;
        x=x^w;
    }
    if(x==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
       }
       else{

    if(n%2==0){
       
      
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
       
    }
    else{
        if(x==0){
            cout<<0<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;

        }
    }
}
    }
}