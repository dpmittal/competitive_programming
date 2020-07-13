#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sumOfDigits(ll a){
    ll s  = 0;
    while(a>0){
        s+= a%10;
        a/=10;
    }
    return s;
}
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        ll chef = 0, morty = 0;
        for(int i=0;i<n;i++){
            ll a, b;
            cin>>a>>b;
            ll s_a = sumOfDigits(a);
            ll s_b = sumOfDigits(b);
            if(s_a>s_b)
                chef++;
            else if(s_a<s_b)
                morty++;
            else{
                chef++;
                morty++;
            }
        }
        if(chef>morty)
            cout<<0<<" ";
        else if(morty>chef)
            cout<<1<<" ";
        else
            cout<<2<<" ";
        cout<<max(chef, morty)<<endl;
    }
    return 0;
}