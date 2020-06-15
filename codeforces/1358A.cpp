#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll a, b;
        cin>>a>>b;
        if(a*b%2==0)
            cout<<(a*b)/2<<endl;
        else
            cout<<((a*b)/2)+1<<endl;
    }
    return 0;
}