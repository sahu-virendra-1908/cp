# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k ;
        cin>>n >>k ;
        vector<int>a(n);
        int i =0 ;
        for(i =0 ; i < n ; i++){
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a.begin(), a.end());
    
        int ans =0 ;
        for(i = 0; i < n; i++){
            if(a[i]<=k){
                k-=a[i];
ans++;
            }
            else{
                break;
            }
        }
        cout << ans << "\n";
    }
}