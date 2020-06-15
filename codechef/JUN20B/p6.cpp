#include<bits/stdc++.h>
#define ll long long
#define ld long double 
#define ull unsigned long long
ll gcdl(ll a, ll b){
    if(b==0)
        return a;
    return gcdl(b, a%b);
}
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ld a, b, c, p, q, r;
        cin>>p>>q>>r>>a>>b>>c;
        ll d1 = a-p;
        ll d2 = b-q;
        ll d3 = c-r;
        ld q1 = a/p;
        ld q2 = b/q;
        ld q3 = c/r;
        // cout<<d1<<" "<<d2<<" "<<d3<<endl;
        // cout<<q1<<" "<<q2<<" "<<q3<<endl;
        if(d1==0 && d2==0 && d3==0)
            cout<<0<<endl;
        else if(d1==0 && d2==d3)
            cout<<1<<endl;
        else if(d2==0 && d1==d3)
            cout<<1<<endl;
        else if(d3==0 && d1==d2)
            cout<<1<<endl;
        else if(q1==1 && q2==q3)
            cout<<1<<endl;
        else if(q2==1 && q1==q3)
            cout<<1<<endl;
        else if(q3==1 && q1==q2)
            cout<<1<<endl;
        else if((abs(d1-d2)!=d3 && abs(d2-d3)!=d1 && abs(d1-d3)!=d2 && d1!=d2 && d2!=d3 && d3!=d2) && (q1==1 && gcdl(q2, q3)==1) || (q2==1 && gcdl(q1, q3)==1) || (q3==1 && gcdl(q2, q1)==1))
            cout<<3<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}