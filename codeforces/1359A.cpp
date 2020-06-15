#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n, m, k;
        cin>>n>>m>>k;
        if(m==0)
            cout<<0<<endl;
        else{
            ll d = n/k;
            if(d>=m)
                cout<<m<<endl;
            else{
                ll ma =  d;
                ll re;
                if((m-d)%(k-1)==0)
                    re = (m-d)/(k-1);
                else
                    re = ((m-d)/(k-1)) + 1;
                cout<<ma-re<<endl;
            }
        }
    }
    return 0;
}