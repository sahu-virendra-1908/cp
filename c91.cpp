#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k ,x;
        cin>>n>>k>>x;
      long long  mini = k*(k+1)/2;
    long long  max = k*(2*n - k +1)/2;
        if(x>=mini && x<=max)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
}