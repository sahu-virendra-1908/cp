# include <bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b+c)cout<<"First"<<endl;
        else if(b>a+c)cout<<"Second"<<endl;
        else if(b=a+c)cout<<"First"<<endl;
        else if(a=b+c)cout<<"Second"<<endl;
        else if(a>b && c>(a-b) && c%2==0)cout<<"First"<<endl;
        else if(a>b && c>(a-b) && c%2!=0)cout<<"Second"<<endl;
              else if(b>a && c>(b-a) && c%2==0)cout<<"Second"<<endl;
        else if(b>a && c>(b-a) && c%2!=0)cout<<"First"<<endl;


        


    }
}