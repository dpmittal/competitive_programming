#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        string s;
        cin>>s;
        int n  = s.length();
        string ans = "";
        ans+=s[0];
        ans+=s[1];
        for(int i=2;i<n;i++){
            if(i%2==0 && s[i]==s[i-1])
                continue;
            else
                ans+=s[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}