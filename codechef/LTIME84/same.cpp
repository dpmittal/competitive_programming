#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        ll ans = 0, x = 0, y = 0;
        for(int i=0;i<n;i++){
            x+=a[i];
            y+=b[i];
            if(x==y && a[i]==b[i])
                ans+= b[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}