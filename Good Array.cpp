# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    long long sum =0 ;
    int f=INT_MIN, s=INT_MIN;
    for(int i =0 ; i <n; i++){
        cin>>a[i];
        if(f<a[i]){
            s=f;
            f= a[i];
        }
        else if(s<a[i]){
            s=a[i];
        }
        sum+=a[i];
    }
    vector<int>ans;
    for(int i =0 ; i <n ; i++){
        long long t = sum-a[i];
        if(a[i]!=f){
         t= t-f;
         if(t==f){
            ans.push_back(i+1);
         }
        }
        else {
            t= t-s;



           if(t==s){
            ans.push_back(i+1);
         } 
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0 ; i <ans.size() ;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}