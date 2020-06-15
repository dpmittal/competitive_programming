#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        string s;
        cin>>s;
        n = s.length();
        int ans = 0;
        for(int i=0;i<n;i++){
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')){
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}