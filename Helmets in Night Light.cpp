# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,p;
    cin>>n>>p;
    vector<int>a(n),b(n);
    vector<pair<long long, long long>> v(n);
    for(int i =0 ; i <n; i++){
        cin>>a[i];

    }
    for(int i =0 ; i <n; i++){
        cin>>b[i];

    }
    for(int i =0 ; i <n; i++){
        v[i]={b[i], a[i]};
    }
    sort(v.begin(), v.end());
    long long ans = p ;
    int k = 1;
for(int i =0 ;i<n ; i++){
    int num = v[i].second;
    int cost = v[i].first;
    if(cost>=p)break;
    if(k+num  > n){
        ans =  (n-k)*cost +ans ;

    }
  else{
    ans=(num*cost)+ans;
    k=k+num;
  }

}

    ans = ans + (n-k)*p ;

cout<<ans<<endl;
    }
}