# include <bits/stdc++.h>
using namespace std ;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>> n ;
    int x =0 , l =0, s=n;
while(n--){
    int k ;
    cin>>k;
    x=x^k ;
    l = k;
}
if(s%2==0 &&x==0)cout<<l<<endl;
else if(s%2!=0)cout<<x<<endl;
else cout<<-1<<endl;

}

}