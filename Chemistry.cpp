# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k ;
        cin>>n>>k ;
        string s;
        cin>>s;
        map<char,int>mp;
        for(auto it :s)mp[it]++;
        int c=0;
        for(auto it :mp){
            if(it.second%2!=0)c++;
        }
        if(c-k<=1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}