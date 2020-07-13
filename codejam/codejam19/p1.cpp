#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n, k=0, l=0, c=0;
        int d;
        cin>>n;
        while(n>0){
            c++;
            d = n%10;
            n=n/10;
            if(d==4)
            {
                l = l*10 + 3;
                k = k*10 + 1;
            }
            else{
                k*=10;
                l = l*10 +d;
            }
        }
        ll ans1 = k, ans2 = 0;
        for(ll i=0;i<c;i++){
          d = l%10;
          l=l/10;
          ans2 = ans2*10+d;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }

}
