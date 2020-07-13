#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        ll ans_x = 0, ans_y = 0;
        for(int i=0;i<4*n-1;i++){
            ll a, b;
            cin>>a>>b;
            ans_x^=a;
            ans_y^=b;
        }
        cout<<ans_x<<" "<<ans_y<<endl;
    }
    return 0;
}