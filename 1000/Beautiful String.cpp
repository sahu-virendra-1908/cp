# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n ;
        string s;
        cin>>s;
        int i =0 , j = n ;
        vector<int>ans;
        while(i<j){
            if(s[i]!='0'){
ans.push_back(i+1);

             
            }
            i++;
            
        }
   
    
        cout<<ans.size()<<endl;
        for(int i =0 ; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}


// when we have a string of 0 and 1 we can make a beautiful string by removing all the 0 from the string and the index of the 1 will be the answer