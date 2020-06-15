#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll L, l, r, v;
        cin>>L>>v>>l>>r;
        ll count = ceil(L/v);
        if(l%v==0)
            count-= ((r/v)-(l/v)+1);
        else
            count-= ((r/v)-(l/v));
        cout<<count<<endl;
    }
    return 0;
}