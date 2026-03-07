#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        map<int,int> cnt;
        for(auto &x:a){cin>>x; cnt[x]++;}
        
        // compute MEX
        int mex=0;
        while(cnt[mex]>0) mex++;
        
        if(mex==0){
            cout<<"NO\n";
        } else if(mex==1 && cnt[0]>=2){
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}