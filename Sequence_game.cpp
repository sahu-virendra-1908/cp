# include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin >>t;
    while (t--)
    { int n ;
        cin>>n;
        int m = n;
        vector<int>a(n);
        int i =0 ;
           vector<int>ans;
        while(m--){
            cin>>a[i];
            if(ans.empty()){
                ans.push_back(a[i]);
            }
            else {
                if(a.back()<a[i])ans.push_back(a[i]);
                else {ans.push_back(a[i]-1);
                ans.push_back(a[i]);
                }
            }
        }
        cout<<ans.size()<<end;
       i =0 ;
        while(i<ans.size()){
            cout<<a[i];
            i++;
        }
        
    }
    
}