# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>a(n);
        for(int i =0 ; i <n ; i++){
            cin>>a[i];
        }
        int y=0 ,x=0 ;
        bool ok = false ;
        for(int i =0 ; i <n ; i++){
            for(int j =i +1; j < n ; j++){
               if(((a[j]%a[i])%2) == 0){
                    y = a[j];
                    x = a[i];
                    ok = true;
                    break;
                }
            }
        }
        if(ok){
            cout<<x<<" "<<y<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}