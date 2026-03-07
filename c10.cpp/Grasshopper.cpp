# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k ;
        cin>>x>>k ;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            int i =1;
        while(i<x){
            if((x-i)%k!=0 && i%k!=0){
                 cout<<2<<endl;
                cout<<i<<" "<<x-i<<endl;
                break;
            }
            i++;
        }


        }

    }
}