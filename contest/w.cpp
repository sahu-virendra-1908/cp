#include <bits/stdc++.h>
using namespace std;

int sumDigits(int x){
    int s=0;
    while(x){
        s+=x%10;
        x/=10;
    }
    return s;
}

string build(int x){
    string res="";
    while(true){
        string t=to_string(x);
        res+=t;
        if(x<=9) break;
        x=sumDigits(x);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        vector<int> cnt(10,0);
        for(char c:s) cnt[c-'0']++;

        for(int x=1;x<=100000;x++){
            string t=build(x);
            if(t.size()!=s.size()) continue;

            vector<int> need(10,0);
            for(char c:t) need[c-'0']++;

            if(need==cnt){
                cout<<t<<"\n";
                break;
            }
        }
    }
}