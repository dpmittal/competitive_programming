#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll count = 0;
    for(int i=1;i<=n;i*=10)
        count+= (n-i+1);
    cout<<count<<endl;
    return 0;
}