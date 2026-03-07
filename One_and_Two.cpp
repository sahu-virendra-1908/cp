# include <bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    while(t--){
        int  n ;
        cin>>n ;
        vector<int>a(n);
    long long m =1;
        for(int i=0;i<n;i++){cin>>a[i];
        m = m*a[i];
        }
        long long c=1;
        bool f = true;
        for(int i=0;i<n;i++){
             c= a[i]*c;
             m= m/a[i];
                if(c==m){
cout<<i+1<<endl;
f=false;
break;

                }
           
        }
        if(f)cout<<-1<<endl;

    }
}