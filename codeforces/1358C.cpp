#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
ull fact(ull a, ull b){
    ull f =1;
    while(a>b){
        f*=a;
        a--;
    }
    return f;
}
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 || y1==y2)
            cout<<1<<endl;
        else{
            ull ans = 0, r = x2-x1, c=y2-y1;
            ans = fact(r+c, max(r, c))/(fact(min(r, c), 1));
            cout<<ans<<endl;
        }
    }
    return 0;
}