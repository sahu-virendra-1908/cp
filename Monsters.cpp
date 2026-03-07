# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i =0 ; i < n;i++){
            arr[i]= arr[i]%k;
        }
        vector<pair<int,int>>v;
        for(int i =0 ; i <n ; i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        for(int i =0 ; i < n;i++){
            cout<<v[i].second+1<<" ";
        }

    }


}